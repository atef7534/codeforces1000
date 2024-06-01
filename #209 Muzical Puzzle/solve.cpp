#include <iostream>
#include <string>
#include <set>

int main(void)
{
  int t;
  std::cin >> t;

  while (t--)
  {
    int n;
    std::cin >> n;

    std::string s;
    std::cin >> s;

    std::set<std::string> st;
    for (int i = 0; i < n - 1; i++)
      st.insert(s.substr(i, 2));

    std::cout << int(st.size()) << "\n";
  }

  return 0;
}