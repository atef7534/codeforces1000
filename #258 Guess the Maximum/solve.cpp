#include <iostream>
#include <string>
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
  int n, i;
  std::cin >> n;

  std::vector<int> a(n), b;
  for (i = 0; i < n; i++)
    std::cin >> a[i];
  
  for (i = 0; i + 1 < n; i++)
    b.push_back(std::max(a[i] , a[i + 1]));
  
  std::cout << *min_element(b.begin(), b.end()) << "\n";
  return;
}