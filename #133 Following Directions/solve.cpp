#include <iostream>
#include <utility>

int main(void)
{
  int tests;
  std::cin >> tests;

  while (tests--)
  {
    int s;
    std::cin >> s;
    
    std::pair<int, int> p(0, 0);
    bool ok = false;
    for (int i = 0; i < s; i++)
    {
      char c;
      std::cin >> c;

      p.first += (c == 'R');
      p.first -= (c == 'L');
      p.second += (c == 'U');
      p.second -= (c == 'D');

      ok |= (p.first == 1 && p.second == 1);
    }

    (ok) ? std::cout << "YES\n" : std::cout << "NO\n";
  }
  return 0;
}