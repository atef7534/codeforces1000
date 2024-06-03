#include <iostream>
#include <string>

int main(void)
{
  int t;
  std::cin >> t;

  while (t--)
  {
    std::string s, t = "";
    std::cin >> s;

    int sz = int(s.size()) / 3 + 2;
    for (int _ = 0; _ < sz; _++)
      t += "Yes";
    
    if (t.find(s) != std::string::npos)
      std::cout << "YES\n";
    else
      std::cout << "NO\n";
  }
  return 0;
}
