#include <stdio.h>
#include <stdlib.h>

int main(void) {
  
  int n, k;
  scanf("%d%d", &n, &k);

  int mod = n % k;
  printf("%d\n", n + (k - mod));

  return 0;

}

