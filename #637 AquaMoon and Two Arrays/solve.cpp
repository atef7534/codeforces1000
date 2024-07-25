/**
 * author: atef_ai
 * created: 23 Jul
 */
#include <iostream>
#include <algorithm>
#include <vector>
struct Pair {
  int ai, bi;
};
int main(void)
{
  int t;
  std::cin >> t;
  while (t--) {
    int n;
    std::cin >> n;
    std::vector<Pair> a(n);
    for (int itr = 0; itr < n; itr++)
      std::cin >> a.at(itr).ai;
    for (int itr = 0; itr < n; itr++)
      std::cin >> a.at(itr).bi;
    // solution
    int overP = 0, overN = 0;
    std::vector<std::pair<int, int>> oversP;
    for (int itr = 0; itr < n; itr++) {
      if (a.at(itr).ai < a.at(itr).bi) {
        overN += a.at(itr).ai - a.at(itr).bi;
      } else if (a.at(itr).ai > a.at(itr).bi) {
        overP += a.at(itr).ai - a.at(itr).bi;
        oversP.push_back(std::make_pair(itr, a.at(itr).ai - a.at(itr).bi));
      }
    }
    if (overP + overN != 0 || overP > 100) {
      std::cout << -1 << '\n';
    } else {
      std::cout << overP << '\n';
      for (int itr = 0; itr < n; itr++) {
        while (a.at(itr).ai < a.at(itr).bi) {
          std::cout << oversP.back().first + 1 << ' ' << itr + 1 << '\n';
          oversP.back().second -= 1;
          a.at(itr).ai += 1;
          if (!oversP.back().second) {
            oversP.pop_back();
          }
        }
      }
    }
  }
}