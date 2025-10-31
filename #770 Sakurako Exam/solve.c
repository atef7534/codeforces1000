#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d%d", &a, &b);

  int arr[4] = {0};
  arr[a] = 1;
  arr[b] = 1;
  for (int i = 1; i < 4; i++) {
    if (!arr[i]) {
      printf("%d\n", i);
    }
  }
  return 0;
}
