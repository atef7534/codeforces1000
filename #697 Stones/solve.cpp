/**
 * author: atef_ai
 * created: 1 Aug 17:10
**/
#include <iostream>
int main(void) {
  int t; std::cin >> t;
  while (t--) {
    int a, b, c;
    std::cin >> a >> b >> c;
    int mnbc = std::min(b, c / 2);
    int res = 3 * mnbc;
    b -= mnbc;
    int mnab = std::min(a, b / 2);
    std::cout << 3 * mnab + res << '\n';
  }
  return 0;
}