#include <iostream>

int main(void)
{
  int tests;
  std::cin >> tests;

  while (tests--)
  {
    int a, b;
    std::cin >> a >> b;

    // ( states )
    // if (b == a) {
    //   std::cout << "0\n";
    // } else if (b > a) {
    //   bool ok = ((b & 1) != (a & 1));
    //   if (ok) {
    //     std::cout << "1\n";
    //   } else {
    //     std::cout << "2\n";
    //   }
    // } else {
    //   bool ok = ((b & 1) != (a & 1));
    //   if (ok) {
    //     std::cout << "2\n";
    //   } else {
    //     std::cout << "1\n";
    //   }
    // }

    // ( math )
    if (a == b) std::cout << "0\n";
    else std::cout << 1 + int((a > b) ^ !((a - b) & 1)) << "\n";
  }
  return 0;
}