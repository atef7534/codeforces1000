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
  std::string s;
  std::cin >> s;

  std::vector<int> a(26, 0);
  for (int i = 0; i < int(s.size()) / 2; i++)
    a[s[i] - 'a']++;
  
  int c = std::count_if(a.begin(), a.end(), [&] (int x) {
    return x > 0;
  });

  std::cout << (c > 1 ? "YES\n" : "NO\n");
  return;
}