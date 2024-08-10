/**
 * author: atef_ai
 * created: 5 Aug 19:17
**/
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <limits>
std::vector<int> getBits(int n);
int getDecimal(std::vector<int>& v);
int main(void) {
  int t; 
  std::cin >> t;
  while (t--) {
    int n;
    std::cin >> n;
    std::vector<int> a(n, 0);
    for (int itr = 0; itr < n; itr++)
      std::cin >> a.at(itr);
    std::vector<std::vector<int>> b(n, std::vector<int>(11, 0));
    for (int itr = 0; itr < n; itr++) {
      b.at(itr) = getBits(a.at(itr));
    }
    for (int itr = 0; itr < n; itr++) {
      for (int iitr = 0; iitr < 11; iitr++) {
        if (!b.at(itr).at(iitr))
          std::swap(b.at(0).at(iitr), b.at(itr).at(iitr));
        else
          std::swap(b.at(n - 1).at(iitr), b.at(itr).at(iitr));
      }
    }
    int mn = getDecimal(b.at(0)),
        mx = getDecimal(b.at(n - 1));
    std::cout << mx - mn << '\n';
  }
  return 0;
}
std::vector<int> getBits(int n) {
  std::vector<int> a(11, 0);
  for (int itr = 0; itr < 11; itr++) {
    a.at(itr) = (n & 1);
    n >>= 1;
  }
  return a;
}
int getDecimal(std::vector<int>& v) {
  int number = 0;
  for (int itr = 0; itr < 11; itr++) {
    if (!(v.at(itr))) continue;
    number += (1 << itr);
  }
  return number;
}