#include <stdio.h>
#include <stdlib.h>

// Swaps two elements in the array
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Restores the max heap property for a given node
void maxHeapify(int arr[], int n, int i) {
    int largest = i;  // Initialize the largest as the root
    int left = 2 * i + 1;  // Calculate the left child index
    int right = 2 * i + 2;  // Calculate the right child index

    // If left child is greater than root
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // If right child is greater than the largest so far
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If the largest is not the root, swap and heapify
    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        maxHeapify(arr, n, largest);
    }
}

// Builds the max heap from the given array
void buildMaxHeap(int arr[], int n) {
    // Start from the last non-leaf node and go up to the root
    for (int i = n / 2 - 1; i >= 0; i--)
        maxHeapify(arr, n, i);
}

// Sorts the array using the heap sort algorithm
void heapSort(int arr[], int n) {
    // Build the max heap
    buildMaxHeap(arr, n);

    // One by one extract the max elements from the heap
    for (int i = n - 1; i >= 0; i--) {
        // Swap the root (largest) with the last element
        swap(&arr[0], &arr[i]);

        // Reduce heap size and heapify the root
        maxHeapify(arr, i, 0);
    }
}

int main() {
    int arr[] = {5, 9, 8, 7, 1, 3};
    int n = sizeof(arr) / sizeof(int);

    heapSort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}