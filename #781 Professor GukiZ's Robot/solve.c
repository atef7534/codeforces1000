#include <stdio.h>
#include <stdlib.h>

int min(int a, int b);
int max(int a, int b);

int main(void) {
  
  int p1, p2;
  scanf("%d%d", &p1, &p2);

  int p3, p4;
  scanf("%d%d", &p3, &p4);

  printf("%d\n", max(abs(p4 - p2), abs(p3 - p1)));

  return 0;

}

int max(int a, int b) {
  return (a > b ? a : b);
}

int min(int a, int b) {
  return (a < b ? a : b);
}
