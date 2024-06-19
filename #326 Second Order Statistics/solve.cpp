#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <limits>
#include <string>
#include <cmath>
#include <set>
#include <map>


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

  std::set<int> st;
  for (int i = 0; i < n; i++)
  {
    int x;
    std::cin >> x;
    st.insert(x);
  }

  int x = 1;
  for (auto &i: st)
  {
    if (!x)
      return static_cast<void> (std::cout << i << '\n');
    --x;
  }
  std::cout << "NO\n";
  return;
}