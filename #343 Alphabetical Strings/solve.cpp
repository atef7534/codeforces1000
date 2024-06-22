#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <set>
#include <string>
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
  std::string s;
  std::cin >> s;

  std::vector<int> a(26, 0);

  char maxCharacter = s.front();
  for (auto &c: s)
  {
    if (c > maxCharacter)
      maxCharacter = c;
    a[c - 'a']++;
    if (a[c - 'a'] > 1)
      return static_cast<void> (std::cout << "NO\n");
  }

  for (char i = 'a'; i <= maxCharacter; i++)
    if (!a[i - 'a'])
      return static_cast<void> (std::cout << "NO\n");
  
  int leftMaxCharacter = s.front(),
      indexOfA = s.find('a');
  for (int i = 0, n = int(s.size()); i < indexOfA; i++)
  {
    char tmp = s[i];
    if (tmp > leftMaxCharacter)
      return static_cast<void> (std::cout << "NO\n");
    leftMaxCharacter = tmp;
  }

  int rightMaxCharacter = s.back();
  for (int i = int(s.size()) - 1; i > indexOfA; i--)
  {
    char tmp = s[i];
    if (tmp > rightMaxCharacter)
      return static_cast<void> (std::cout << "NO\n");
    rightMaxCharacter = tmp;
  }
  std::cout << "YES\n";
  return;
}
