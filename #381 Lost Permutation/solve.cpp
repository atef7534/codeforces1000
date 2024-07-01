#include <algorithm>
#include <iostream>
#include <limits>
#include <map>
#include <vector>

void solve();

int main()
{
    int tests;
    std::cin >> tests;
    while (tests--)
      solve();
    return 0;
}


void solve()
{
  int size, k;
  std::cin >> size >> k;

  std::vector<int> freqs(51, 0);
  int mn = 51, mx = 0; 
  for (int itr = 0; itr < size; itr++)
  {
    int tmp;
    std::cin >> tmp;
    freqs.at(tmp) = 1;
    mn = std::min(mn, tmp), mx = std::max(mx, tmp);
  }

  int sum = 0;
  for (int itr = mn; itr <= mx; itr++)
    sum += (freqs.at(itr) ? itr : 0);
  
  int req = (mx * (mx + 1) / 2) - sum;
  if (req > k)
    return void(std::cout << "NO\n");
  
  k -= req;
  int newStart = mx + 1;

  while (newStart <= k)
    k -= newStart++;
  
  std::cout << (k ? "NO\n" : "YES\n");
  return;
}