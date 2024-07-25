/**
 * author: atef_ai
 * created: 25 Jul
 */
#include <iostream>
#include <algorithm>
#include <vector>
bool isPrime(int number);
int main(void)
{
  int t;
  std::cin >> t;
  while (t--) {
    int n, a, q;
    std::cin >> n >> a >> q;
    // solution
    int pass = a, maybe = a;
    std::string res = "NO\n";
    for (int _ = 0; _ < q; _++) {
      char c; std::cin >> c;
      if (pass == n)
        res = "YES\n";
      if (!res.compare("NO\n") && maybe == n && maybe != pass)
        res = "MAYBE\n";
      pass += (c == '+' ? 1 : -1);
      maybe += (c == '+');
    }
    if (pass == n)
      res = "YES\n";
    if (!res.compare("NO\n") && maybe == n)
      res = "MAYBE\n";
    std::cout << res;
  }
  return 0;
}
