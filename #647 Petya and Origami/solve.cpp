/**
 * author: atef_ai
 * created: 24 Jul
 */
#include <iostream>
#include <vector>
#include <string>
int main(void)
{
  int n, k;
  std::cin >> n >> k;
  // solution
  int r = (n * 2 + k - 1) / k;
  int g = (n * 5 + k - 1) / k;
  int b = (n * 8 + k - 1) / k;
  std::cout << r + g + b << '\n';
  return 0;
}