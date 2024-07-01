#include <algorithm>
#include <cmath>
#include <iostream>
#include <limits>
#include <map>
#include <set> 
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
  int sz, k;
  std::cin >> sz >> k;

  std::vector<int> a(101, 0);
  std::set<int> st;
  for (int itr = 1; itr <= sz; itr++)
  {
    int tmp;
    std::cin >> tmp;
    a.at(tmp) = itr;
    st.insert(tmp);
  }

  if (int(st.size()) < k)
    return void(std::cout << "NO\n");

  std::cout << "YES\n";
  for (int itr = 1; itr < 101 && k; itr++)
  {
    if (a.at(itr))
    {
      k--;
      std::cout << a.at(itr) << ' ';
    }
  }
  std::cout << '\n';
  return;
}