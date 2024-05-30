#include <iostream>
#include <vector>

int main(void)
{
  int tt = 1; std::cin >> tt;
  while (tt--)
  {
    int n; std::cin >> n;
    bool yes = true;
    
    std::vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
      std::cin >> a[i];
      a[i] &= 1;
      if (i > 1)
        yes &= (!(a[i] ^ a[i - 2]));
    }
    (yes) ? std::cout << "YES\n" : std::cout << "NO\n";
  } 
  return 0;
}