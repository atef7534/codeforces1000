#include <iostream>
#include <string>

int main(void)
{
  int t;
  std::cin >> t;

  while (t--)
  {
    std::string n;
    std::cin >> n;

    int i;
    for (i = 0; i < int(n.size()); i++)
    {
      int x = int(n[i] - '0');
      if (!(x & 1))
        break;
    }
    if (i > int(n.size()) - 1)
      std::cout << "-1\n";
    else
    {
      if (!(int(n.back() - '0') & 1))
        std::cout << "0\n";
      else 
      {
        std::cout << (!i ? "1\n" : "2\n");
      }
    }
  }
  return 0;
}