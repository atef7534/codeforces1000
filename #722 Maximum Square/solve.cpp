/**
 * author: atef_ai
 * created: 5 Aug 16:16
**/
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <limits>
int main(void) {
  int t; 
  std::cin >> t;
  while (t--) {
    int n;
    std::cin >> n;
    std::vector<int> a(n, 0);
    for (int itr = 0; itr < n; itr++)
      std::cin >> a.at(itr);
    std::sort(a.begin(), a.end());
    int score = 0;
    for (int itr = 0; itr < n; itr++) {
      while (itr + a.at(itr) > n)
        a.at(itr)--;
      score = std::max(score, a.at(itr));
    }
    std::cout << score << '\n';
  }
  return 0;
}