#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int t; scanf("%d", &t);
  while (t--) {
    int n; scanf("%d", &n);
    printf("%d\n", n);
    for (int i = 1; i <= n; i++) {
      printf("%d ", i);
    }
    printf("\n");
  }
  return 0;
}
