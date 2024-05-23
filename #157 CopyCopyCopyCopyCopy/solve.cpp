// #include <algorithm> (solution (1))
#include <iostream>
// #include <vector> (solution (1))
#include <set> // solution (2)


int main(void)
{
  int tt;
  std::cin >> tt;

  while (tt--)
  {
    int n;
    std::cin >> n;

    // solution (1) 218 ms

    // std::vector<int> a(n);
    // std::vector<int>::iterator it;

    // for (int i = 0; i < n; i++)
    //   std::cin >> a[i];
    
    // std::sort(a.begin(), a.end());
    // it = std::unique(a.begin(), a.end());

    // a.resize(std::distance(a.begin(), it));
    // std::cout << a.size() << "\n";

    // solution (2) 202 ms
    std::set<int> st;
    for (int i = 0; i < n; i++)
    {
      int x;
      std::cin >> x;
      st.insert(x);
    }

    std::cout << st.size() << "\n";
  }
  return 0;
}
