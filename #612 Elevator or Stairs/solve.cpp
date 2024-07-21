/*
  author: atef_ai
  created: 20 Jul 2024
  problem: Elevator or Stairs?
*/
#include <iostream>
int main(void) {
  int x, y, z;
  std::cin >> x >> y >> z;
  int t1, t2, t3;
  std::cin >> t1 >> t2 >> t3;
  int stairs = abs(y - x) * t1;
  int elevators = 3 * t3 + abs(z - x) * t2 + abs(y - x) * t2;
  std::cout << (stairs >= elevators ? "YES\n" : "NO\n");
  return 0;
}