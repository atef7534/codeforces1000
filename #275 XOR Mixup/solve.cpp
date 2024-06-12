#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

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

  for (int i = 0; i < n; i++)
  {
    int t = 0;
    for (int j = 0; j < n; j++)
    {
      if (j == i)
        continue;
      t ^= a[j];
    }
    std::cout << t << "\n";
    // return static_cast<void> (std::cout << a[i] << "\n");
  }
  return;
}

/*
  4 (100)
  2 (010)
  5 (101)
  101
*/