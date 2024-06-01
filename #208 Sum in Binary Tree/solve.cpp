#include <iostream>

int main(void)
{
  int t;
  std::cin >> t;

  while (t--)
  {
    long long n;
    std::cin >> n;

    long long sum = 0;
    while (n)
    {
      sum += n;
      n /= 2;
    }

    std::cout << sum << "\n";
  }

  return 0;
}