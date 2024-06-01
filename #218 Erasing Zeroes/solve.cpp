#include <iostream>
#include <string>
#include <vector>
#include <utility>

int main(void)
{
  int t;
  std::cin >> t;

  while (t--)
  {
    std::string n;
    std::cin >> n;

    std::vector<std::pair<int, int>> a;
    int i, ans = 0;
    for (i = 0; n[i] != '\0'; i++)
    {
      if (n[i] == '1')
      {
        int x = i;
        while (n[i] != '\0' && n[i] == '1')
          i++;
        a.push_back(std::make_pair(x, i - 1));
        i--;
      }
    }

    for (i = 1; i < int(a.size()); i++)
      ans += (a[i].first - a[i - 1].second - 1);
    
    std::cout << ans << "\n";
  }
  return 0;
}