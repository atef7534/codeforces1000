/**
 * author: atef_ai
 * created: Jul 27 18:39
 **/
#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>
int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    int n, l;
    std::cin >> n >> l;
    /* solution */
    std::vector<int> a(n, 0);
    for (int itr = 0; itr < n; itr++)
      std::cin >> a.at(itr);
    std::vector<int> bits(32, 0);
    int size = 0;
    for (int itr = 0; itr < n; itr++) {
      int tmp = a.at(itr);
      int pos = 0;
      while (tmp) {
        if (tmp & 1) bits.at(pos)++;
        pos++;
        tmp >>= 1;
      }
      size = std::max(size, pos);
    }
    int res = 0, two = 1;
    for (int itr = 0; itr < size; itr++) {
      if (bits.at(itr) * 2 > n)
        res += two;
      two <<= 1;
    }
    std::cout << res << '\n';
  }
  return 0;
}
/*
  001
  010
  011
  100
  101
  001
*/