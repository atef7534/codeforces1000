#include <iostream>
#include <string>
#include <vector>

int main(void)
{
  int tt;
  std::cin >> tt;

  while (tt--)
  {
    std::string s, t;
    std::cin >> s >> t;

    std::vector<int> pos(26, 0);
    for (int i = 0; s[i] != '\0'; i++)
      pos[s[i] - 'a'] = i + 1;

    int sum = 0;
    for (int i = 0; t[i + 1] != '\0'; i++)
      sum += abs(pos[t[i] - 'a'] - pos[t[i + 1] - 'a']);

    std::cout << sum << "\n";
  }
  return 0;
}