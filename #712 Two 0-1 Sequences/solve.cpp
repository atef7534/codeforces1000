/**
 * author: atef_ai
 * created: 3 Aug 15:41
**/
#include <iostream>
#include <string>
int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    int n, m;
    std::cin >> n >> m;
    std::string a, b;
    std::cin >> a >> b;
    while (n != m) {
      if (b[0] == '1') a[1] = std::max(a[0], a[1]);
      else a[1] = std::min(a[0], a[1]);
      a = a.substr(1);
      --n;
    }
    std::cout << (!a.compare(b) ? "YES\n" : "NO\n");
  }
  return 0;
}