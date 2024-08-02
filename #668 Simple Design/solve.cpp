/*
 * author: atef_ai
 * created: 27 Jul
 */
#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
int getSum(int cp);
int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    int x, k;
    std::cin >> x >> k;
    /* solution */
    int sum = getSum(x);
    while (sum % k) {
      x++;
      sum = getSum(x);
    }
    std::cout << x << '\n';
  }
}
int getSum(int cp) {
  int sum = 0;
  while (cp)
      sum += cp % 10, cp /= 10;
  return sum;
}