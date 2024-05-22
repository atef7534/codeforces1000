#include <iostream>

int main(void)
{
  int n;
  std::cin >> n;

  if (n & 1) std::cout << "-1\n";
  else 
  {
    for (int i = 2; i <= n - 2; i += 2)
      std::cout << i << " " << i - 1 << " ";
    std::cout << n << " " << n - 1 << "\n";
  }
  return 0;
}