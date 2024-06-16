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
  std::string s1, s2;
  std::cin >> s1 >> s2;

  std::string comb = s1 + s2;
  
  std::set<char> st;
  for (auto &c: comb)
    st.insert(c);

  std::cout << int(st.size()) - 1 << "\n";
  return;
}