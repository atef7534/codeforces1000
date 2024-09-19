#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int t; scanf("%d", &t);
  while (t--) {
    int n; scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
      scanf("%d", &arr[i]);
    if (n == 2 && abs(arr[0] - arr[1]) > 1) printf("YES\n");
    else printf("NO\n");
  }
  return 0;
}