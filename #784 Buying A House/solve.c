#include <stdio.h>
#include <stdlib.h>

#define min(a, b) ((a) < (b) ? (a) : (b))

int main(void) {
  int n, m, k;
  scanf("%d%d%d", &n, &m, &k);
  int *a = (int *) calloc(n, sizeof(int));
  if (a == NULL) {
    return 1;
  }
  int min_distance = n * 10;
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    if (a[i] && a[i] <= k) {
      min_distance = min(min_distance, abs((i + 1) - m) * 10);
    }
  }
  printf("%d\n", min_distance);
  free(a);
  return 0;
}

