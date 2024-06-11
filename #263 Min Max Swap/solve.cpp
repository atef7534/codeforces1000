#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

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
  int n, i, ans = INT_MIN;
  std::cin >> n;

  std::vector<int> a(n), b(n);
  for (i = 0; i < n; i++)
    std::cin >> a[i];

  for (i = 0; i < n; i++)
    std::cin >> b[i];
  
  for (i = 0; i < n; i++)
  {
    if (a[i] < b[i])
      std::swap(a[i], b[i]);
  }

  std::cout << *max_element(a.begin(), a.end()) * *max_element(b.begin(), b.end()) << "\n";
  return;
}