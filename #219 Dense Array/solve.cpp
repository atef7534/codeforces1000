#include <iostream>
#include <vector>

int main(void)
{
  int t;
  std::cin >> t;

  while (t--)
  {
    int n, i, c = 0;
    std::cin >> n;

    std::vector<int> a(n);
    for (i = 0; i < n; i++)
      std::cin >> a[i];
    
    for (i = 0; i < n - 1; i++)
    {
      int mx = std::max(a[i], a[i + 1]), 
          mn = std::min(a[i], a[i + 1]);
      while ((mn << 1) < mx)
      {
        mn <<= 1;
        c++;
      }
    }
    std::cout << c << "\n";
  }
  return 0;
}