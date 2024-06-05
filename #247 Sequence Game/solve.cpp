#include <iostream>
#include <vector>


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
  int n, i;
  std::cin >> n;

  std::vector<int> a(n), b;
  for (i = 0; i < n; i++)
    std::cin >> a[i];
  
  b.push_back(a[0]);
  for (i = 1; i < n; i++)
  {
    if (a[i] > a[i - 1])
    {
      b.push_back(a[i]);
      continue;
    }
    b.push_back(std::min(a[i], a[i - 1]) - 1);
    b.push_back(a[i]);
  }

  std::cout << int(b.size()) << "\n";
  for (i = 0; i < int(b.size()); i++)
    std::cout << b[i] << " ";
  std::cout << "\n";

  return;
}