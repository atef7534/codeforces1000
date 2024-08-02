/**
 * author: atef_ai
 * created: 31 Jul 12:26
**/
#include <iostream>
#include <vector>
std::istream& operator>>(std::istream& input, std::vector<int>& b);
std::istream& operator>>(std::istream& input, std::vector<std::vector<int>>& a);
int main(void) {
  int t; std::cin >> t;
  while (t--) {
    int n, m; std::cin >> n >> m;
    std::vector<std::vector<int>> a(n, std::vector<int>(m, 0));
    std::cin >> a;
    /* solution */
    int i = 0, j = 0;
    for (int itr = 0; itr < n; itr++) {
      for (int itrj = 0; itrj < m; itrj++) {
        if (a.at(itr).at(itrj) > a.at(i).at(j))
          i = itr, j = itrj;
      }
    }
    std::cout << std::max(i + 1, n - i) * std::max(j + 1, m - j) << '\n';
  }
  return 0;
}
std::istream& operator>>(std::istream& input, std::vector<int>& b) {
  int m = int(b.size());
  for (int itr = 0; itr < m; itr++)
    input >> b.at(itr);
  return input;
}
std::istream& operator>>(std::istream& input, std::vector<std::vector<int>>& a) {
  int n = int(a.size());
  for (int itr = 0; itr < n; itr++)
    std::cin >> a.at(itr);
  return input;
}