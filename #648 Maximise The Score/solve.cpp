/**
 * author: atef_ai
 * created: 24 Jul
 */
#include <iostream>
#include <vector>
#include <algorithm>
int main(void)
{
  int t;
  std::cin >> t;
  while (t--) {
    int n;
    std::cin >> n;
    std::vector<int> a(n * 2, 0);
    for (int itr = 0; itr < 2 * n; itr++) 
      std::cin >> a.at(itr);
    //solution
    std::sort(a.begin(), a.end());
    int score = 0;
    for (int itr = 0; itr < 2 * n; itr += 2) {
      score += a.at(itr);
    }
    std::cout << score << '\n';
  }
  return 0;
}