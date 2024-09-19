#include <stdio.h>

int main(void) {
  int n, m;
  scanf("%d%d", &n, &m);

  int r = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int w1, w2;
      scanf("%d%d", &w1, &w2);
      r += (w1 + w2 > 0);
    }
  }

  printf("%d\n", r);
  return 0;
}
