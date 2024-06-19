#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <set>
#include <string>
#include <vector>


void solve();

int main(void)
{
  int t = 1;
  while (t--)
    solve();
  return 0;
}

void solve()
{
  int n;
  std::cin >> n;

  std::vector<int> d(n - 1);
  for (int i = 0; i < n - 1; i++)
    std::cin >> d.at(i);
  
  int a, b;
  std::cin >> a >> b;

  std::cout <<  std::accumulate(d.begin(), d.begin() + b - 1, 0) - 
                std::accumulate(d.begin(), d.begin() + a - 1, 0) << '\n';
  return;
}