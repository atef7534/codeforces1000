#include <iostream>


int main(void)
{
  long long n;
  std::cin >> n;
  n = (n * (n + 1)) / 2;
  std::cout << (n & 1 : "1\n" : "0\n");
  return 0;
}