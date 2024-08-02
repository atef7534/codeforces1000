/*
 * author: atef_ai
 * created: 27 Jul
 */
#include <iostream>
#include <vector>
int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    int n, m;
    std::cin >> n >> m;
    /* solution */
    std::vector<char> a(n, '\0'), b(m, '\0');
    for (auto &c: a)
      std::cin >> c;
    for (auto &c: b)
      std::cin >> c;
    bool twoOnes = false, twoZeros = false;
    for (int itr = 0; itr + 1 < n; itr++) {
      twoOnes |= (a.at(itr) == a.at(itr + 1) && a.at(itr) == '1');
      twoZeros |= (a.at(itr) == a.at(itr + 1) && a.at(itr) == '0');
    }
    if (!(twoOnes + twoZeros)) {
      std::cout << "Yes\n";
      continue;
    }
    bool valid = true;
    for (int itr = 0; itr + 1 < m; itr++)
      valid &= (b.at(itr) != b.at(itr + 1));
    if (!(valid)) {
      std::cout << "No\n";
      continue;
    }
    if (twoOnes && (b.at(0) == '1' || b.at(m - 1) == '1')) {
      std::cout << "No\n";
      continue;
    } 
    if (twoZeros && (b.at(0) == '0' || b.at(m - 1) == '0')) {
      std::cout << "No\n";
      continue;
    }
    std::cout << "Yes\n";
  }
  return 0;
}