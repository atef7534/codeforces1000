/**
 * author: atef_ai
 * created: 23 Jul
 */
#include <iostream>
#include <algorithm>
#include <vector>
int main(void)
{
  int n;
  std::cin >> n;
  // solution
  std::vector<int> a(1001, 0);
  a.at(1) = 1;
  a.at(2) = 1;
  int itr = 2, last = 1;
  while (itr + last <= 1000) {
    int t = itr;
    itr += last;
    a.at(itr) = 1;
    last = t;
  }
  for (int itr = 1; itr <= n; itr++) {
    if (a.at(itr)) std::cout << 'O';
    else std::cout << 'o';
  }
  std::cout << '\n';
  return 0;
}