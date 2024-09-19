#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int t; scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    
    int *arr = (int *) malloc(sizeof(int) * (n + 1));
    if (arr == NULL) {
      return 0;
    }
    for (int i = 0; i < n; i++) {
      char *str = (char *) malloc(sizeof(char) * 5);
      if (str == NULL) {
        return 0;
      }
      scanf("%s", str);
      
      for (int j = 0; j < 4; j++) {
        if (str[j] == '#') {
          arr[i] = j + 1;
          break;
        }
      }

      free(str);
    }

    for (int i = n - 1; i >= 0; i--) {
      printf("%d ", arr[i]);
    }
    free(arr);
    printf("\n");
  }
  return 0;
}