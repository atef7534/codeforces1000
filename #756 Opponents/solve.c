#include <stdio.h>

int get(char a[], int n);
int max(int a, int b);

int main(void) {
  int n, d, mx = 0, t = 0;
  scanf("%d%d", &n, &d);
  for (int i = 0; i < d; i++) {
    char x[100]; scanf("%s", x);
    int y = get(x, n);
    if (y == n) {
      mx = max(mx, t);
      t = 0;
    } else t++;
  }
  printf("%d\n", max(mx, t));
  return 0;
}

int get(char a[], int n) {
  int c = 0;
  for (int i = 0; i < n; i++)
    c += (a[i] == '1');
  return c;
}

int max(int a, int b) {
  return (a > b ? a : b);
}