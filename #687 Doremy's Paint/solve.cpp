/**
 * author: atef_ai
 * created: 30 Jul 13:44
**/
#include <iostream>
#include <vector>
int main(void) {
  int t; std::cin >> t;
  while (t--) {
    int n; std::cin >> n;
    std::vector<int> a(n, 0);
    for (int itr = 0; itr < n; itr++)
      std::cin >> a.at(itr);
    /* solution */
    std::cout << "1 " << n << '\n';
  }
  return 0;
}