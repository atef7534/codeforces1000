#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <limits>
#include <string>
#include <cmath>
#include <set>


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
  int n;
  std::cin >> n;

  std::set<int> st;
  int t1 = std::numeric_limits<int>::min(), t2 = std::numeric_limits<int>::max();

  while (n--)
  {
    int t, x;
    std::cin >> t >> x;

    if (t == 1)
      t1 = std::max(t1, x);

    if (t == 2)
      t2 = std::min(t2, x);
    
    if (t == 3)
      st.insert(x);
  }
  
  int c = std::count_if(st.begin(), st.end(), [&](int x) {
    return x >= t1 && x <= t2;
  });

  int ans = t2 - t1 - c + 1;
  std::cout << (ans < 0 ? 0 : ans);
  std::cout << '\n';
  return;
}