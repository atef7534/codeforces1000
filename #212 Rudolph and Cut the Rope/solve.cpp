#include <iostream>

int main(void)
{
  int t;
  std::cin >> t;

  while (t--)
  {
    int n;
    std::cin >> n;

    int _, c = 0;
    for (_ = 0; _ < n; _++)
    {
      int a, b;
      std::cin >> a >> b;

      c += (b < a);
    }
    std::cout << c << "\n";
  }
  return 0;
}