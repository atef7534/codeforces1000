#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int t;
  scanf("%d", &t);

  while (t--) {

    int n, k;
    scanf("%d%d", &n, &k);

    k %= 4;

    if (!k) {
      printf("YES\n");
    } else if (!(k - 1)) {
      if (n & 1) {
        printf("NO\n");
      } else {
        printf("YES\n");
      }
    } else if (!(k - 3)) {
      if (n & 1) {
        printf("YES\n");
      } else {
        printf("NO\n");
      }
    } else {
      printf("NO\n");
    }
  }

  return 0;
}

/*
  

*/