/**
 * author: atef_ai
 * created: 3 Aug 13:02
**/
#include <iostream>
#include <string>
int f(int x, int n);
int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    int n, k, x = -1;
    std::cin >> n >> k;
    for (int itr = 0; itr <= n; itr++) {
      if (f(itr, n) == k) x = itr;
    }
    if (x == -1) std::cout << "NO\n";
    else {
      std::cout << "YES\n";
      for (int itr = 0; itr < n; itr++) {
        if (itr < x) std::cout << "1 ";
        else std::cout << "-1 ";
      }
      std::cout << '\n';
    }
  }
  return 0;
}
int f(int x, int n) {
  return x * (x - 1) / 2 + (n - x) * (n - x - 1) / 2;
}