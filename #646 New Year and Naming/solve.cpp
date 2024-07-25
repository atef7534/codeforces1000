/**
 * author: atef_ai
 * created: 24 Jul
 */
#include <iostream>
#include <vector>
#include <string>
int main(void)
{
  int n, m;
  std::cin >> n >> m;
  std::vector<std::string> s(n), t(m);
  for (int itr = 0; itr < n; itr++) 
    std::cin >> s.at(itr);
  for (int itr = 0; itr < m; itr++)
    std::cin >> t.at(itr);
  int q;
  std::cin >> q;
  while (q--) {
    int year;
    std::cin >> year;
    // solution
    int sPos = std::max(0, (year - 1) % n);
    int tPos = std::max(0, (year - 1) % m);
    std::cout << s.at(sPos) + t.at(tPos) << '\n';
  }
  return 0;
}