/**
 * author: atef_ai
 * created: 28 Jul 19:11
**/
#include <algorithm>
#include <iostream>
#include <vector>
int main(void) {
  int n; std::cin >> n;
  int size; std::cin >> size;
  std::vector<int> a(n, 0);
  for (int itr = 0; itr < n; itr++)
    std::cin >> a.at(itr);
  /* solution */
  std::sort(a.begin(), a.end(), [&] (int x, int y) {
    return x > y;
  });
  for (int itr = 1; itr < n; itr++)
    a.at(itr) += a.at(itr - 1);
  int left = 0, right = n;
  while (left <= right) {
    int mid = (left + right) / 2;
    if (a.at(mid) >= size) {
      right = mid - 1;
    } else {
      left = mid + 1;
    }
  }
  std::cout << left + 1 << '\n';
  return 0;
}