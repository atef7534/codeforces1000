/**
 * author: atef_ai
 * created: 2 Aug 18:49
**/
#include <algorithm>
#include <iostream>
#include <vector>
struct rate {
  int count = 0;
  int rate = 0;
};
int main(void) {
  int n;
  std::cin >> n;
  std::vector<int> a(n, 0);
  std::vector<rate> f(2001);
  for (int itr = 0; itr < n; itr++) {
    std::cin >> a.at(itr);
    f.at(a.at(itr)).count++;
  }
  int t = 0;
  for (int itr = 2000; itr > 0; itr--) {
    if (!f.at(itr).count) continue;
    f.at(itr).rate = t + 1;
    t += f.at(itr).count;
  }
  for (int itr = 0; itr < n; itr++) {
    std::cout << f.at(a.at(itr)).rate << ' ';
  }
  std::cout << '\n';
  return 0;
}