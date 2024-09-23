#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int t;
  scanf("%d", &t);

  char **arr = (char **) malloc(t * sizeof(char *));
  if (arr == NULL) {
    return 0;
  }

  for (int i = 0; i < t; i++) {
    char *s = (char *) malloc(sizeof(char) * (t + 1));
    if (s == NULL) {
      return 0;
    }

    scanf("%s", s);
    arr[i] = s;
  }

  int total = 0;
  for (int i = 0; i < t; i++) {
    int cr = 0, cc = 0;
    for (int j = 0; j < t; j++) {
      cr += (arr[i][j] == 'C');
      cc += (arr[j][i] == 'C');
    }
    total += (cr * (cr - 1)) / 2;
    total += (cc * (cc - 1)) / 2;
  }

  printf("%d\n", total);
  for (int i = 0; i < t; i++) {
    free(arr[i]);
  }
  return 0;
}