#include <iostream>
#include <string>
#include <vector>

void solve();
int main(void)
{
  int t = 1;
  while (t--)
    solve();
  return 0;
}

void solve()
{
  int sz, q;
  std::cin >> sz >> q;

  std::string s;
  std::cin >> s;

  std::vector<int> a(sz + 1, 0);
  for (int i = 0; i < sz; i++)
    a[i + 1] += a[i] + (s[i] - 'a') + 1;

  while (q--)
  {
    int l, r;
    std::cin >> l >> r;

    std::cout << a[r] - a[l - 1] << "\n";
  }
  return;
}
