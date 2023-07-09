#include <stdio.h>

void bubbleSort(int array[], int size) {
    int i, j, temp, swaps[size];
    for (i = 0; i < size; i++)
        swaps[i] = 0;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swaps[j]++;
            }
        }
    }

    for (i = 0; i < size; i++)
        printf("Number of swaps needed for index %d: %d\n", i, swaps[i]);
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, size);

    return 0;
}
