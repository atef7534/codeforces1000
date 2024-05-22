#include <iostream>
#include <string>

bool chk(int l, int r, std::string s);

int main(void)
{
  int tests;
  std::cin >> tests;

  while (tests--)
  {
    int n;
    std::cin >> n;

    std::string s;
    std::cin >> s;

    int l = 0, r = n - 1;
    while (r > l && chk(l, r, s))
    {
      l++, r--;
    }

    std::cout << r - l + 1 << "\n";
  }
  return 0;
}

bool chk(int l, int r, std::string s)
{
  return s[l] != s[r];
}