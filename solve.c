#include <stdio.h>
#include <stdlib.h>

#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))

int main(void) {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n, k;
    scanf("%d%d", &n, &k);
    int *a = (int *) calloc(k + 1, sizeof(int));
    if (a == NULL) {
      return 1;
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
      int _tmp = 0;
      for (int j = 0; j < k; j++) {
        char c;
        scanf(" %c", &c);
        if (c == '+') {
          _tmp++;
        }
      }
      ans = max(ans, ++a[_tmp]);
    }
    free(a);
    printf("%d\n", ans);
  }
  return 0;
}

