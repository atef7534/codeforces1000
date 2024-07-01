#include <iostream>

int main(void)
{
  int a1, a2, a3;
  std::cin >> a1 >> a2 >> a3;

  int b1, b2, b3;
  std::cin >> b1 >> b2 >> b3;

  int n;
  std::cin >> n;

  int sumA = a1 + a2 + a3;
  int sumB = b1 + b2 + b3;

  int cnt = (sumA + 4) / 5 + (sumB + 9) / 10;
  std::cout << (cnt > n ? "NO\n" : "YES\n");
  return 0;
}

