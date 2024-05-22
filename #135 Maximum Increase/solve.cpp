#include <iostream>
#include <vector>

int main(void)
{
  int n;
  std::cin >> n;

  std::vector<int> a(n);
  for (int i = 0; i < n; i++)
    std::cin >> a[i];
  
  int ans = 0, i, j;
  for (i = 1, j = 0; i < n; i++)
  {
    if (a[i] <= a[i - 1])
    {
      ans = std::max(ans, i - j);
      j = i;
    }
  }
  std::cout << std::max(ans, i - j) << "\n";
  return 0;
}