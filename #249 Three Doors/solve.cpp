#include <iostream>
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

  std::vector<int> a(3);
  std::cin >> a[0] >> a[1] >> a[2];

  if (a[n - 1] == 0 || a[a[n - 1] - 1] == 0)
    std::cout << "NO\n";
  else
    std::cout << "YES\n";
  return;
}