#include <stdio.h>

int min(int a, int b);

int main(void) {
  int t; scanf("%d", &t);
  while (t--) {
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);
    n = min(n, k);
    m = min(m, k);
    printf("%d\n", n * m);
  }
  return 0;
}

int min(int a, int b) {
  return (a > b ? b : a);
}

