#include <stdio.h>
#include <stdlib.h>

int* mergeSort(int* arr, int size);
int* slice(int* arr, int start, int end);
int* merge(int* left, int leftSize, int* right, int rightSize);

int main(void) {
  int t; scanf("%d", &t);
  while (t--) {
    int size; scanf("%d", &size);
    int *a = (int *)calloc(sizeof(int), size);
    int *b = (int *)calloc(sizeof(int), size);
    
    for (int i = 0; i < size; i++)
      scanf("%d", &a[i]);
    
    for (int i = 0; i < size; i++)
      scanf("%d", &b[i]);
    
    int *sort_a = mergeSort(a, size);
    int *sort_b = mergeSort(b, size);

    for (int i = 0; i < size; i++)
      printf("%d ", sort_a[i]);
    printf("\n");

    for (int i = 0; i < size; i++)
      printf("%d ", sort_b[i]);
    printf("\n");
  }
  return 0;
}

int* mergeSort(int* arr, int size) {
    if (size <= 1) {
        // Base case: if the array has one or zero elements, return a copy of the array
        int* baseArr = (int*)malloc(size * sizeof(int));
        if (baseArr != NULL) {
            for (int i = 0; i < size; i++) {
                baseArr[i] = arr[i];
            }
        }
        return baseArr;
    }
    int mid = size / 2;

    int* left = slice(arr, 0, mid);
    int* right = slice(arr, mid, size);

    int* sortedLeft = mergeSort(left, mid);
    int* sortedRight = mergeSort(right, size - mid);

    free(left);
    free(right);

    int* mergedArr = merge(sortedLeft, mid, sortedRight, size - mid);

    free(sortedLeft);
    free(sortedRight);

    return mergedArr;
}

int* slice(int* arr, int start, int end) {
    int size = end - start;
    int* result = (int*)malloc(size * sizeof(int));

    if (result != NULL) {
        for (int i = 0; i < size; i++) {
            result[i] = arr[start + i];
        }
    }

    return result;
}

int* merge(int* left, int leftSize, int* right, int rightSize) {
    int* result = (int*)malloc((leftSize + rightSize) * sizeof(int));

    if (result == NULL) {
        printf("Can't Allocate Memory!\n");
        return NULL;
    }

    int i = 0, j = 0, k = 0;
    while (i < leftSize && j < rightSize) {
        if (left[i] < right[j]) {
            result[k++] = left[i++];
        } else {
            result[k++] = right[j++];
        }
    }

    while (i < leftSize) {
        result[k++] = left[i++];
    }

    while (j < rightSize) {
        result[k++] = right[j++];
    }

    return result;
}
