/*
  author: atef_ai
  date: 14 Jul 2024
  problem: Key Races
*/
#include <iostream>
int main(void)
{
  int s, v1, v2, t1, t2;
  std::cin >> s >> v1 >> v2 >> t1 >> t2;
  int res1 = s * v1 + 2 * t1;
  int res2 = s * v2 + 2 * t2;
  if (res1 == res2)
  {
    std::cout << "Friendship\n";
  }
  else if (res1 > res2)
  {
    std::cout << "Second\n";
  }
  else
  {
    std::cout << "First\n";
  }
  return 0;
}
