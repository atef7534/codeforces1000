#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool chk(int sum);

int main(void) {
  int t; scanf("%d", &t);
  while (t--) {
    int n, sum = 0; scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int) * n + 1);
    for (int i = 1; i <= n; i++) {
      scanf("%d", &arr[i]);
      sum += arr[i];
    }
    int i = 0, minus = 0;
    for (i = 0; i <= n; i++) {
      if (chk(sum - arr[i])) {
        minus = i; break;
      }
    }
    printf("%d\n", n - (minus > 0));
    for (int i = 1; i <= n; i++) {
      if (i == minus) continue;
      printf("%d ", i);
    }
    printf("\n");
  }
  return 0;
}

bool chk(int sum) {
  for (int i = 2; i * i <= sum; i++) {
    if (!(sum % i)) return true;
  }
  return false;
}