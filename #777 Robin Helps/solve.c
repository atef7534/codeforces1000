#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int t;
  scanf("%d", &t);

  while (t--) {

    int n, k;
    scanf("%d%d", &n, &k);

    int *a = (int *) malloc(sizeof(int) * n);
    if (a == NULL) {
      return 0;
    }

    for (int i = 0; i < n; i++) {
      scanf("%d", &a[i]);
    }

    int given = 0, money = 0;
    for (int i = 0; i < n; i++) {
      if (!a[i]) {
        given += (money > 0);
        if (money) {
          money--;
        }
      } else {
        money += (a[i] >= k ? a[i] : 0);
      }
    }

    printf("%d\n", given);

  }
  
  return 0;
}