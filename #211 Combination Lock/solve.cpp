#include <iostream>
#include <string>

int main(void)
{
  int n, s = 0;
  std::cin >> n;

  std::string s1, s2;
  std::cin >> s1 >> s2;

  for (int i = 0; i < n; i++)
  {
    int x1 = int(s1[i] - '0'), x2 = int(s2[i] - '0');
    s += std::min(abs(x1 - x2), std::min(10 - x1 + x2, x1 + 10 - x2));
  }

  std::cout << s << "\n";
  return 0;
}