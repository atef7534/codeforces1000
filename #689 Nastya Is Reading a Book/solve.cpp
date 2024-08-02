/**
 * author: atef_ai
 * created: 31 Jul 12:26
**/
#include <iostream>
#include <vector>
int main(void) {
  int n; std::cin >> n;
  /* solution */
  std::vector<int> a(n);
  for (int itr = 0; itr < n; itr++) {
    int l, r; std::cin >> l >> r;
    a.at(itr) = r;
  }
  int k, itr; std::cin >> k;
  for (itr = 0; itr < n && a.at(itr) < k; itr++);
  std::cout << n - itr << '\n';
  return 0;
}