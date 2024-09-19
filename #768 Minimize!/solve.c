#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int t; scanf("%d", &t);
  while (t--) {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", b - a);
  }
  return 0;
}