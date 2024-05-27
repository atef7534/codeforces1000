#include <iostream>
#include <algorithm>
#include <vector>

int main(void)
{
  int tt;
  std::cin >> tt;

  while (tt--)
  {
    int n;
    std::cin >> n;

    std::vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
      std::cin >> a[i];
      b[i] = a[i];
    }
    
    std::sort(b.begin(), b.end());
    for (int i = 0; i < n; i++)
    {
      if (b[n - 1] == a[i])
        std::cout << a[i] - b[n - 2] << " ";
      else
        std::cout << a[i] - b[n - 1] << " ";
    }
    std::cout << "\n";
  }
  return 0;
}