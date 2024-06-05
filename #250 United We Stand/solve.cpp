#include <iostream>
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
  int n, i, x;
  std::cin >> n;

  std::vector<int> a(n);
  for (i = 0; i < n; i++)
    std::cin >> a[i];
  
  std::sort(a.begin(), a.end());

  if (a[0] == a[n - 1])
  {
    std::cout << "-1\n";
    return;
  }
  for (i = 0; a[i] == a[0]; i++);

  std::cout << i << " " << n - i << "\n";

  for (x = 0; x < i; x++)
    std::cout << a[x] << " ";
  std::cout << "\n";

  for (; i < n; i++)
    std::cout << a[i] << " ";
  std::cout << "\n";
  
  return;
}