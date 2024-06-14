#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <limits>

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

  std::vector<int> a(101, 0);
  for (int i = 0; i < n; i++)
  {
    int x;
    std::cin >> x;
    ++a[x];
  }
  

  int result = 0;
  for (int i = 2; i < 101; i++)
    result += a[i];
  
  result += ((a[1]  + 1)/ 2);
  std::cout << result << "\n";
  return;
}