#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int t; scanf("%d", &t);
  while (t--) {
    int sz; scanf("%d", &sz);
    char *s = (char *)malloc(sizeof(char) * (sz + 1));
    scanf("%s", s);

    // solution
    if (s[0] != s[sz - 1]) printf("YES\n");
    else printf("NO\n");
  }
  return 0;
}