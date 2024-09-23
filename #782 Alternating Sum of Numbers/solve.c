#include <stdio.h>

int main(void) {
  
  int t;
  scanf("%d", &t);

  while (t--) {
    
    int n;
    scanf("%d", &n);

    int r = 0, p = -1;
    scanf("%d", &r);

    for (int i = 0; i + 1 < n; i++) {
      
      int x;
      scanf("%d", &x);

      r += p * x;
      p *= -1;

    }

    printf("%d\n", r);
    
  }

  return 0;

}

