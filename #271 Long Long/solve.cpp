#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

void solve();
int main(void)
{
  int t;
  std::cin >> t;
  while (t--)
    solve();
  return 0;
}

void solve()
{
  int n, ok = 0;
  std::cin >> n;

  std::vector<int> a(n);
  long long sum = 0, op = 0;
  for (int i = 0; i < n; i++)
  {
    std::cin >> a[i];
    sum += abs(a[i]);

    if (!a[i])
      continue;
    
    if (!i)
      ok = (a[i] > 0) ? 1 : -1;
    else
    {
      if (a[i] > 0)
      {
        if (ok == -1)
          ++op;
        ok = 1;
      }
      else
        ok = -1;
    }
  }
  if (ok == -1)
    ++op;
  
  std::cout << sum << " " << op << "\n";
  return;
}
