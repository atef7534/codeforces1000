#include <iostream>
#include <vector>

int main(void)
{
  int t;
  std::cin >> t;

  while (t--)
  {
    int n, sum = 0, ans = 0;
    std::cin >> n;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
      std::cin >> a[i];
      sum += a[i];
    }

    if (sum % n)
      std::cout << "-1\n";
    else
    {
      sum /= n;
      for (int i = 0; i < n; i++)
        ans += (a[i] > sum);
      std::cout << ans << "\n";
    }
  }
  return 0;
}