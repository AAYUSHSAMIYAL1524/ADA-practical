#include <stdio.h>
#include <conio.h>

void main() {
    int arr[7]; // Array of 7 integers
    int m, x, l, u, i;

   

    printf("Enter the 7 values (sorted):\n");
    for (i = 0; i < 7; i++) {
        scanf("%d", &arr[i]); // Input array elements
    }

    printf("Enter the number to search: ");
    scanf("%d", &x); // Input the value to search for

    l = 0;          // Initialize lower bound
    u = 6;          // Initialize upper bound

    // Binary search loop
    do {
        m = (l + u) / 2; // Calculate mid-point
        if (x == arr[m]) {
            printf("The value is found at index %d.\n", m);
            break; // Exit loop when the value is found
        } else if (x < arr[m]) {
            u = m - 1; // Search in the left half
        } else if (x > arr[m]) {
            l = m + 1; // Search in the right half
        }
    } while (l <= u);

    if (l > u) { // If the loop completes without finding the value
        printf("The value is not found.\n");
    }

  // Wait for user input before exiting (specific to Turbo C/C++)
}
