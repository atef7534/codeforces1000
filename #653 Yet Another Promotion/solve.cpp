/**
 * author: atef_ai
 * created: 25 Jul
 */
#include <iostream>
#include <algorithm>
#include <vector>
int main(void)
{
  int t;
  std::cin >> t;
  while (t--) {
    long long a, b;
    std::cin >> a >> b;
    long long n, m;
    std::cin >> n >> m;
    long long mod = a * (n / (m + 1)) * m;
    std::cout << std::min(b * n, mod + (n % (m + 1)) * std::min(a, b)) << '\n';
  }
  return 0;
}