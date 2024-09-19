#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int t; scanf("%d", &t);
  while (t--) {
    int n; scanf("%d", &n);
    int res = 1, turn = 0, tri = 0;
    int cp = n;
    --n;
    for (int i = 2; n; i++) {
      if (tri == 2) { turn = !turn; tri = 0; }
      if (turn) res += (n >= i ? i : n);
      if (n <= i) { break; }
      n -= i;
      tri++;
    }
    printf("%d %d\n", res, cp - res);
  }
  return 0;
}
