#include <iostream>
#include <vector>

int main(void)
{
  int tests;
  std::cin >> tests;

  while (tests--)
  {
    int n;
    std::cin >> n;
    
    std::vector<int> v(n * 2);
    int c = 0;
    for (int i = 0; i < n * 2; i++)
    {
      std::cin >> v[i];
      c += (v[i] & 1) ? 1 : 0;
    }
    (c == n) ? std::cout << "YES\n" : std::cout << "NO\n";
  }
  return 0;
}