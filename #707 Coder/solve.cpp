/**
 * author: atef_ai
 * created: 2 Aug 21:12
**/
#include <iostream>
int main(void) {
  int n; std::cin >> n;
  if (!(n & 1)) std::cout << n * (n / 2) << '\n';
  else {
    std::cout << ((n + 1) / 2) * ((n + 1) / 2) + (n / 2) * (n / 2) << '\n';
  }
  bool turn = 0;
  for (int itr = 0; itr < n; itr++) {
    for (int itrj = 0; itrj < n; itrj++) {
      if (turn) {
        if (itrj & 1) std::cout << 'C';
        else std::cout << '.';
      } else {
        if (!(itrj & 1)) std::cout << 'C';
        else std::cout << '.';
      }
    }
    std::cout << '\n';
    turn = !turn;
  }
  return 0;
}