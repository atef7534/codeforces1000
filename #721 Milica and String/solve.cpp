/**
 * author: atef_ai
 * created: 5 Aug 16:05
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
    int n, k;
    std::cin >> n >> k;
    std::string s(n, '0');
    std::cin >> s;
    int countB = 0;
    for (int itr = 0; itr < n; itr++)
      countB += (s[itr] == 'B');
    if (countB < k) {
      int tmpA = 0, itr;
      for (itr = 0; itr < n && tmpA + countB < k; itr++) {
        tmpA += (s[itr] == 'A');
      }
      std::cout << "1\n";
      std::cout << itr << ' ' << "B\n";
    } else if (countB > k) {
      int tmpB = 0, itr;
      for (itr = 0; itr < n && countB - tmpB > k; itr++)
        tmpB += (s[itr] == 'B');
      std::cout << "1\n";
      std::cout << itr << ' ' << "A\n";
    } else std::cout << "0\n";
  }
  return 0;
}