#include <iostream>
#include <vector>
#include <set>

int main(void)
{
  int tt = 1; std::cin >> tt;
  while (tt--)
  {
    int n, c = 0, t = 0; std::cin >> n;
    std::vector<int> f(10'000 + 1, 0);
    std::set<int> st;
    for (int i = 0; i < n; i++)
    {
      int x; std::cin >> x;
      st.insert(x);
      f[x]++;
    }

    for (auto &i: st)
    {
      if (f[i] & 1) c++;
      else t++;
    }
    std::cout << c + t - (t & 1) << "\n";
  } 
  return 0;
}

/*
  2 2 2 3 3 3
  1 2 3 1 2 3
  1 2 3 1 2 3
*/