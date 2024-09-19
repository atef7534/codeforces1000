#include <stdio.h>
#include <stdlib.h>

int min(int a, int b);
int max(int a, int b);
void swap(int *l, int *m);

int main(void) {
  int n; scanf("%d", &n);
  int *a = (int *)calloc(sizeof(int), n + 1);
  for (int i = 0; i < n; i++) {
    int x; scanf("%d", &x);
    a[x] = i + 1;
  }
  int l = a[1], m = a[n];
  if (l > m) swap(&l, &m);

  printf("%d\n", max(max(n - l, m - 1), min(n - 1, m - l + 1)));
  return 0;
}

int min(int a, int b) {
  return (a > b ? b : a);
}

int max(int a, int b) {
  return (a > b ? a : b);
}

void swap(int *l, int *m) {
  int tmp = *l;
  *l = *m;
  *m = tmp;
}