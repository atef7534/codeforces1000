#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool chk(int xx, int yy);
int n;

int main(void) {
  int t; scanf("%d", &t);
  n = t;
  int xx = 0, yy = 0;
  while (t--) {
    int x, y;
    scanf("%d%d", &x, &y);
    if (x < 0) ++yy;
    else ++xx;
  }
  if (chk(xx, yy)) printf("YES\n");
  else printf("NO\n");
  return 0;
}

bool chk(int xx, int yy) {
  if (!(xx - 1) || !(yy - 1) || !xx || !yy) return true;
  return false;
}