/**
 * author: atef_ai
 * created: 31 Jul 17:10
**/
#include <iostream>
#include <algorithm>
#include <vector>
int main(void) {
  int n, m; std::cin >> n >> m;
  /* solution */
  int x = 0, y = 0, cnt = 0;
  for (int itr = 0; itr < n; itr++) {
    std::string tmp; std::cin >> tmp;
    int left = 0, right = m - 1;
    while (left < m && tmp[left] == 'W')
      ++left;
    if (left == m) {
      cnt += (x == 0);
      continue;
    }
    while (right > -1 && tmp[right] == 'W')
      right--;
    std::string s = tmp.substr(left, right - left + 1);
    if (!y) y = left + (int(s.size()) + 1) / 2;
    x++;
  }
  std::cout << (x + 1) / 2 + cnt << ' ' << y << '\n';
  return 0;
}