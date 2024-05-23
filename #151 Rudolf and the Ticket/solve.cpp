#include <algorithm>
#include <iostream>
#include <vector>

int main(void)
{
  int tt;
  std::cin >> tt;

  while (tt--)
  {
    int n, m, k;
    std::cin >> n >> m >> k;

    std::vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
      std::cin >> a[i];
    
    int count = 0, o;
    for (int i = 0; i < m; i++)
    {
      std::cin >> o;
      for (int j = 0; j < n; j++)
        count += (o + a[j] <= k);
    }

    std::cout << count << "\n";
  }
  return 0;
}
