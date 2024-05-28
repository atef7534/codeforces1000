#include <algorithm>
#include <iostream>
#include <vector>

int main(void)
{
  int tt = 1;
  std::cin >> tt;

  while (tt--)
  {
    int n, sum = 0; std::cin >> n;

    std::vector<int> a(n);

    for (int i = 0; i < n; i++)
      std::cin >> a[i];
    
    std::sort(a.begin(), a.end());
    
    for (int i = 0, j = n - 1; i < j; i++, j--)
      sum += (a[j] - a[i]);
    
    std::cout << sum << "\n";
  } 
  return 0;
}