#include <iostream>
#include <string>

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
  int n;
  std::cin >> n;

  int left = 0, right = 0;
  
  std::string s;
  std::cin >> s;

  for (int i = 0; i < n; i++)
  {
    if (s[i] == 'L')
      left--;
    else
      right++;
  }
  std::cout << std::abs(right - left) + 1 << "\n";
  return;
}
