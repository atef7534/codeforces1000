/**
 * author: atef_ai
 * created: 5 Aug 15:11
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
    int n;
    std::cin >> n;
    std::vector<int> a(n, 0), b(n + 1, 0), c(n + 1, 0);
    for (int itr = 0; itr < n; itr++) {
      std::cin >> a.at(itr);
      if (a.at(itr) > 0) b.at(a.at(itr)) = 1;
      else c.at(-1 * a.at(itr)) = 1;
    }
    int score = 0;
    for (int itr = 1; itr <= n; itr++)
      if (b.at(itr)) std::cout << ++score << ' ';
    for (int itr = 1; itr <= n; itr++)
      if (c.at(itr)) std::cout << --score << ' ';
    std::cout << '\n';
    score = 0;
    for (int itr = 1; itr <= n; itr++) {
      if (c.at(itr)) {
        std::cout << "1 0 ";
        b.at(itr) = 0;
      }
    }
    for (int itr = 0; itr <= n; itr++)
      if (b.at(itr)) std::cout << ++score << ' ';
    std::cout << '\n';
  }
  return 0;
}