#include <iostream>

int main(void)
{
  int n, m, k; 
  std::cin >> n >> m >> k;

  bool ok = (std::min(m, k) >= n);
  (ok) ? std::cout << "Yes\n" : std::cout << "No\n";
  return 0;
}