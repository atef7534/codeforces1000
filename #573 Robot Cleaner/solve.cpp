/*
  author: atef_ai
  created: 16 Jul 2024
  problem: Robot Cleaner
*/
#include <iostream>
#include <algorithm>
int main(void)
{
  int tests;
  std::cin >> tests;
  while (tests--)
  {
    int rows, cols;
    std::cin >> rows >> cols;
    int posx, posy;
    std::cin >> posx >> posy;
    int tarx, tary;
    std::cin >> tarx >> tary;
    if (posx == tarx || posy == tary)
    {
      std::cout << "0\n";
      continue;
    }
    int steps = 0;
    int sx = 1, sy = 1;
    while (posy != tary && posx != tarx)
    {
      if (posx == rows)
      {
        sx *= -1;
      }
      if (posy == cols)
      {
        sy *= -1;
      }
      posx += sx;
      posy += sy;
      steps++;
    }
    std::cout << steps << '\n';
  }
  return 0;
}