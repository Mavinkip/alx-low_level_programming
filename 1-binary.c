#include <stdio.h>

int binary_search(int *array, size_t size, int value);

int main(void) {
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(array)/sizeof(array[0]);
    printf("found %d at index %d\n", 2, binary_search(array, size, 2));
    printf("found %d at index %d\n", 5, binary_search(array, size, 5));
    printf("found %d at index %d\n", 9, binary_search(array, size, 9));
    printf("found %d at index %d\n", 999, binary_search(array, size, 999));
}

int binary_search(int *array, size_t size, int value) {
    if (array == NULL || size == 0) {
        return -1;
    }

    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        printf("Searching in array: ");
        for (int i = left; i <= right; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
        if (array[mid] == value) {
            return mid;
        } else if (array[mid] < value) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}
