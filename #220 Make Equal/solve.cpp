#include <iostream>
#include <vector>
#include <limits>

typedef long long lol;

int main(void)
{
  int t;
  std::cin >> t;

  while (t--)
  {
    int n, i;
    lol s = 0;

    std::cin >> n;

    std::vector<int> a(n);
    for (i = 0; i < n; i++) { std::cin >> a[i]; s += a[i]; }
    s /= n;
    bool ok = true;
    for (i = 0; i < n - 1; i++)
    {
      if (a[i] < s) { ok = false; break; }
      else { a[i + 1] += a[i] - s; a[i] = s; }
    }

    std::cout << (ok ? "YES\n" : "NO\n");
  }
  return 0;
}