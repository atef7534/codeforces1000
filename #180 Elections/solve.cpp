#include <iostream>
#include <algorithm>
#include <vector>

int main(void)
{
  int tt;
  std::cin >> tt;

  while (tt--)
  {
    int a, b, c;
    std::cin >> a >> b >> c;

    std::vector<int> v{a, b, c};
    std::sort(v.begin(), v.end());

    if (v[0] == v[2])
      std::cout << "1 1 1\n";
    else if (v[1] == v[2])
    {
      (a != v[2]) ? std::cout << v[2] - a + 1 << " " : std::cout << "1 ";
      (b != v[2]) ? std::cout << v[2] - b + 1 << " " : std::cout << "1 ";
      (c != v[2]) ? std::cout << v[2] - c + 1 << " " : std::cout << "1\n";
    }
    else 
    {
      (a == v[2]) ? std::cout << "0 " : std::cout << v[2] - a + 1 << " ";
      (b == v[2]) ? std::cout << "0 " : std::cout << v[2] - b + 1 << " ";
      (c == v[2]) ? std::cout << "0\n" : std::cout << v[2] - c + 1 << "\n";
    }
  }
  return 0;
}