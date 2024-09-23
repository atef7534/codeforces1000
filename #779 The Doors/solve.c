#include <stdio.h>
#include <stdlib.h>

int min(int a, int b);

int main(void) {
  
  int n;
  scanf("%d", &n);

  int l = 200000, r = 200000;

  for (int i = 0; i < n; i++) {

    int x;
    scanf("%d", &x);

    if (!x) {
      l = i + 1;
    } else {
      r = i + 1;
    }

  }

  printf("%d\n", min(l, r));

  return 0;

}

int min(int a, int b) {
  return (a < b ? a : b);
}