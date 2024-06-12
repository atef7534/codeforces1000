#include <iostream>
#include <algorithm>
#include <vector>

void solve();
int main(void)
{
  int t;
  std::cin >> t;
  while (t--)
    solve();
  return 0;
}

void solve()
{
  int n;
  std::cin >> n;

  std::vector<int> a(n);
  for (int i = 0; i < n; i++)
    std::cin >> a[i];
  
  std::sort(a.begin(), a.end(), [&] (int x, int y) {
    return x > y;
  });

  if (a.front() == a.back())
    return static_cast<void> (std::cout << "NO\n");
  
  std::cout << "YES\n";
  for (int i = 0; i < n / 2; i++)
    std::cout << a[i] << " " << a[n - i - 1] << " ";
  
  if (n & 1)
    std::cout << a[n / 2];
  std::cout << "\n";

  return;
}
