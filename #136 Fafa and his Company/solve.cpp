#include <iostream>

int main(void)
{
  int n;
  std::cin >> n;

  int count = 1;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0)
    {
      count++;
      if (i * i != n)
      {
        count++;
      }
    }
  }

  std::cout << count << "\n";
  return 0;
}