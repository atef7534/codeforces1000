/**
 * author: atef_ai
 * created: 3 Aug 16:02
**/
#include <iostream>
#include <string>
int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    int n, m;
    std::cin >> n >> m;
    bool turn = 1;
    for (int itr = 1; itr < n; itr++) {
      if (turn) {
        for (int itrj = 1; itrj <= m; itrj++) {
          if (itr == 1) {
            if (itrj & 1) std::cout << '1';
            else std::cout << '0';
          } else {
            if (itrj == 1 || itrj == m) std::cout << '1';
            else std::cout << '0';
          }
        }
      } else {
        for (int itrj = 1; itrj <= m; itrj++)
          std::cout << '0';
      }
      std::cout << '\n';
      turn = !turn;
    }
    if (turn) { for (int itr = 1; itr <= m; itr++) std::cout << (itr & 1 ? '1' : '0'); }
    else { 
      for (int itr = 0; itr < m; itr++) {
        std::cout << ((!(itr & 1) && itr > 1 && itr < m - 2) ? '1' : '0'); 
      }
    }
    std::cout << '\n';
  }
  return 0;
}