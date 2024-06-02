#include <iostream>
#include <string>

int main(void)
{
  int t;
  std::cin >> t;

  while (t--)
  {
    int sz, _, y = 1;
    char d;
    std::cin >> sz >> d;

    std::string s = "";
    for (_ = 0; _ < sz; _++)
    {
      char x; std::cin >> x;
      if (x < d && y)
      {
        y = 0;
        s += d;
      }
      s += x;
    }
    if (y) { s += d; }
    std::cout << s << "\n";
  }
  return 0;
}