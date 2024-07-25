/**
 * author: atef_ai
 * created: 23 Jul
 */
#include <iostream>
#include <algorithm>
#include <vector>
int main(void)
{
  int n, q;
  std::cin >> n >> q;
  std::vector<int> a(n), b;
  for (auto &i: a) std::cin >> i;
  b = a;
  std::sort(b.begin(), b.end(), [&](int x, int y) {
    return x > y;
  });
  int itr = 0;
  for (itr; itr < n && b[itr]; itr++);
  if (itr)
    --itr;
  while (q--) {
    int f, s;
    std::cin >> f >> s;
    if (!(f - 1)) {
      if (a.at(s - 1)) a.at(s - 1) = 0, b.at(itr--) = 0;
      else b.at(itr++) = 1, a.at(s - 1) = 1;
    }
    else  std::cout << b.at(s - 1) << '\n';
  }
  return 0;
}