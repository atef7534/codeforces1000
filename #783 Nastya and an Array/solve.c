#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n;
  scanf("%d", &n);
  int *a = (int *) calloc(100001, sizeof(int));
  int *b = (int *) calloc(100001, sizeof(int));
  if (a == NULL || b == NULL) {
    return 1;
  }
  int r = 0;
  for (int i = 0; i < n; i++) {
    int x;
    scanf("%d", &x);
    if (x < 0) {
      if (!b[-1 * x] && x < 0) {
        r++;
      }
      b[-1 * x] = 1;
    } else {
      if (!a[x] && x > 0) {
        r++;
      }
      a[x] = 1;
    }
  }
  printf("%d\n", r);
  free(a);
  free(b);
  return 0;
}

