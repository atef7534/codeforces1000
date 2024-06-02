#include <iostream>
#include <set>

typedef long long lol;

int main(void)
{
  int t;
  std::cin >> t;

  while (t--)
  {
    lol n, i;
    std::cin >> n;

    std::set<int> s;
    for (i = 1; i * i <= n; i++)
    {
      if (i * i != i * i * i)
      {
        if (i * i * i <= n)
          s.insert(i * i * i);
      }
      s.insert(i * i);
    }
    std::cout << int(s.size()) << "\n";
  }
  return 0;
}