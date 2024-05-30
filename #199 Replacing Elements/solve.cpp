#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
  int tt; std::cin >> tt;
  
  while (tt--)
  {
    int n, k; std::cin >> n >> k;
    std::vector<int> a(n);

    for (int i = 0; i < n; i++)
      std::cin >> a[i];

    std::sort(a.begin(), a.end());
    (a[0] + a[1] <= k || a[n - 1] <= k) ? std::cout << "YES\n" : std::cout << "NO\n";
  }
}