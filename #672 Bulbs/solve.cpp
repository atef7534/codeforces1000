/**
 * author: atef_ai
 * created: 28 Jul 17:58
**/
#include <algorithm>
#include <iostream>
#include <vector>
int main(void) {
  int n, m;
  std::cin >> n >> m;
  /* solution */
  std::vector<int> a(m + 1, 0);
  for (int itr = 0; itr < n; itr++) {
    int xi; std::cin >> xi;
    for (int itrj = 0; itrj < xi; itrj++) {
      int yi; std::cin >> yi;
      a.at(yi) = 1;
    }
  }
  int c = std::count(a.begin() + 1, a.end(), 1);
  std::cout << (c == m ? "YES\n" : "NO\n");
  return 0;
}