#include <iostream>
#include <vector>

int main(void)
{
  int tt;
  std::cin >> tt;

  while (tt--)
  {
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++)
      std::cin >> a[i];
    
    if (n == 1)
    {
      std::cout << a[0] << "\n";
      continue;
    }
    for (int i = 0; i < n / 2; i++)
    {
      if (i != n / 2 - 1)
        std::cout << a[i] << " " << a[n - i - 1] << " ";
      else
        std::cout << a[i] << " " << a[n - i - 1];
    }

    if (n & 1)
      std::cout << " " << a[n / 2] << "\n";
    else
      std::cout << "\n";
  }

  return 0;
}