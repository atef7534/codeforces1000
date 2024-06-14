#include <iostream>
#include <string>

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
  int n, k;
  std::cin >> n >> k;

  std::string s = "";
  for (char i = 'a'; i < 'a' + k; i++)
    s += i;
  
  for (int i = 0; i < n; i++)
    std::cout << s;
  std::cout << "\n";
  
  return;
}