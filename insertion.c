#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, j, key;

    // Iterate over each element starting from the second element
    for (i = 1; i < n; i++) {
        key = arr[i];      // Current element to be inserted
        j = i - 1;

        // Move elements of arr[0..i-1] that are greater than `key` one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        
        // Insert the key at its correct position
        arr[j + 1] = key;
    }
}

int main() {
    int arr[50], n, i;

    // Input: number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input: array elements
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Perform insertion sort
    insertionSort(arr, n);

    // Output: sorted array
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
