/**
 * author: atef_ai
 * created: 5 Aug 01:04
**/
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <limits>
int main(void) {
  int t; 
  std::cin >> t;
  while (t--) {
    int n, c = 1;
    std::cin >> n;
    for (int itr = 1; itr <= n; itr++) {
      for (int iitr = 1; iitr <= itr; iitr++)
        std::cout << (iitr == itr || iitr == 1 ? 1 : 0) << ' ';
      std::cout << '\n';
    }
  }
  return 0;
}