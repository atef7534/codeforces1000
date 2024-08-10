/**
 * author: atef_ai
 * created: 3 Aug 12:20
**/
#include <iostream>
#include <vector>
int main(void) {
  int n, l;
  std::cin >> n >> l;
  std::vector<int> a(n);
  for (int itr = 0; itr < n; itr++)
    std::cin >> a.at(itr);
  int sum = 0;
  for (auto &i: a) sum += i;
  std::cout << (abs(sum) + l - 1) / l << '\n';
  return 0;
}