#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
  int t;
  scanf("%d", &t);

  while (t--) {
    int n;
    scanf("%d", &n);

    char *s = (char *) malloc(sizeof(char) * (n + 1));
    scanf("%s", s);

    int p = 0;
    while (p < n && s[p] == '1') {
      p ++;
    }
    if (p == n) {
      if (p == 4) {
        printf("Yes\n");
      } else {
        printf("No\n");
      }
    } else {
      p--;
      if (p * p == n) {
        printf("Yes\n");
      } else {
        printf("No\n");
      }
    }
  }
  return 0;
}