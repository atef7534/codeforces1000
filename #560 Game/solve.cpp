/*
  author: atef_ai
  date: 14 Jul 2024
  problem: Game 
*/
#include <iostream>
int main(void)
{
  int n1, n2, k1, k2;
  std::cin >> n1 >> n2 >> k1 >> k2;
  if (n1 <= n2)
  {
    std::cout << "Second\n";
  }
  else
  {
    std::cout << "First\n";
  }
  return 0;
}
