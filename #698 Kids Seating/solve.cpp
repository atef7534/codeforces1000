/**
 * author: atef_ai
 * created: 1 Aug 17:10
**/
#include <iostream>
int main(void) {
  int t; std::cin >> t;
  while (t--) {
    int n; std::cin >> n;
    for (int itr = 4 * n; itr > 2 * n; itr -= 2)
      std::cout << itr << ' ';    
    std::cout << '\n';
  }
  return 0;
}