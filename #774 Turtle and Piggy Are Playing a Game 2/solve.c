#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int *sort(int *a, int size);
int *slice(int start, int end, int *a);
int *merge(int *left, int *right, int n, int m);

int main(void) {
  int t;
  scanf("%d", &t);

  while (t--) {
    int n;
    scanf("%d", &n);

    int *a = (int *) malloc(sizeof(int) * n);
    if (a == NULL) {
      return 0;
    }

    for (int i = 0; i < n; i++) {
      scanf("%d", &a[i]);
    }

    int *b = sort(a, n);
    printf("%d\n", b[n / 2]);
    free(a);
  }
  return 0;
}

int *sort(int *a, int size) {
  if (size <= 1) {
    int *c = (int *) malloc(sizeof(int) * size);
    if (c == NULL) {
      return NULL;
    }
    for (int i = 0; i < size; i++) {
      c[i] = a[i];
    }
    return c;
  }

  int m = size / 2;
  int *left = slice(0, m, a);
  int *right = slice(m, size, a);

  int *sort_left = sort(left, m);
  int *sort_right = sort(right, size - m);

  free(left);
  free(right);

  int *merged = merge(sort_left, sort_right, m, size - m);
  
  free(sort_left);
  free(sort_right);

  return merged;
}

int *slice(int start, int end, int *a) {
  int *r = (int *) malloc(sizeof(int) * (end - start));
  if (r == NULL) {
    return NULL;
  }
  for (int i = start; i < end; i++) {
    r[i - start] = a[i];
  }

  return r;
}

int *merge(int *left, int *right, int n, int m) {
  int *ma = (int *) malloc(sizeof(int) * (n + m));
  if (ma == NULL) {
    return NULL;
  }

  int i = 0, j = 0, p = 0;
  while (i < n && j < m) {

    if (left[i] <= right[j]) {
      ma[p++] = left[i++];
    } else {
      ma[p++] = right[j++];
    }

  }

  while (i < n) {
    ma[p++] = left[i++];
  }

  while (j < m) {
    ma[p++] = right[j++];
  }

  return ma;
}