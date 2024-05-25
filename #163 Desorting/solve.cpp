#include <iostream>
#include <vector>
#include <limits>

int main(void)
{
  int tt;
  std::cin >> tt;

  while (tt--)
  {
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    bool ok = true;
    for (int i = 0; i < n; i++)
    {
      std::cin >> a[i];
      if (i) ok &= (a[i] >= a[i - 1]);
    }
    if (!ok)
    {
      std::cout << "0\n";
      continue;
    }

    int mn = std::numeric_limits<int>::max();
    for (int i = 1; i < n; i++)
      mn = std::min(mn, (a[i] - a[i - 1]) / 2);
    
    std::cout << mn + 1 << "\n";
  }
  return 0;
  
}