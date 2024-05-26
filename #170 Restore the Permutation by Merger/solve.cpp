#include <iostream>
#include <vector>

int main(void)
{
  int tt;
  std::cin >> tt;

  while (tt--)
  {
    int n, i;
    std::cin >> n;

    std::vector<int> a, f(51, 0);
    for (int i = 0; i < n * 2; i++)
    {
      int x; std::cin >> x;
      if (!f[x])
      {
        f[x] = 1;
        a.push_back(x);
      }
    }
    for (int i = 0, n = a.size(); i < n; i++)
    {
      if (i != n - 1)
        std::cout << a[i] << " ";
      else
        std::cout << a[i] << "\n";
    }
  }
  return 0;
}