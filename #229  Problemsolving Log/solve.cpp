#include <iostream>
#include <vector>

int main(void)
{
  int t;
  std::cin >> t;

  while (t--)
  {
    int n, i = 0, ans = 0;
    std::cin >> n;

    std::vector<int> b(26, 0);
    for (i = 0; i < n; i++)
    {
      char c;
      std::cin >> c;

      b[c - 'A']++;
    }
    for (i = 1; i <= 26; i++)
    {
      if (b[i - 1] >= i)
        ++ans;
    }
    std::cout << ans << "\n";
  }
  return 0;
}
