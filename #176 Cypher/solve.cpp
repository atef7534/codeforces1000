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
    
    for (int i = 0; i < n; i++)
    {
      int x; std::cin >> x;
      while (x--)
      {
        char c; std::cin >> c;
        c = (c == 'D') ? 'U' : 'D';

        if (c == 'U')
          a[i]++;
        else
          a[i]--;
        
        if (a[i] > 9)
          a[i] = 0;
        
        if (a[i] < 0)
          a[i] = 9;
      }
    }
    for (int i = 0; i < n - 1; i++)
      std::cout << a[i] << " ";
    std::cout << a[n - 1] << "\n";
  }
  return 0;
}