#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
  int t;
  scanf("%d", &t);

  while (t--) {
    int l, r;
    scanf("%d%d", &l, &r);

    int odd = 0;
    for (int i = l; i <= r; i++) {
      odd += (i & 1);
    }

    printf("%d\n", odd / 2);
  }
  return 0;
}