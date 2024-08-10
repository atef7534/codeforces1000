/**
 * author: atef_ai
 * created: 3 Aug 15:24
**/
#include <iostream>
int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    int n, c = 0;
    std::cin >> n;
    for (int itr = 0; itr < n; itr++) {
      int x;
      std::cin >> x;
      c += (x - 1);
    }
    std::cout << (c & 1 ? "errorgorn\n" : "maomao90\n"); 
  }
  return 0;
}