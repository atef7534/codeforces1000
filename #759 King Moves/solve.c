#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char y; scanf("%c", &y);
  int x; scanf("%d", &x);

  if (((x == 8 || x == 1) && (y == 'h' || y == 'a')))
    printf("3\n");
  else if (x == 8 || x == 1 || y == 'h' || y == 'a')
    printf("5\n");
  else
    printf("8\n");
  return 0;
}
