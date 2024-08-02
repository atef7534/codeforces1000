/**
 * author: atef_ai
 * created: 2 Aug 19:11
**/
#include <iostream>
int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    int ni, ki;
    std::cin >> ni >> ki;
    std::string ks = "";
    for (char c = 'a'; c - 'a' < ki; c++)
      ks += c;
    for (int itr = 0; itr < ni / ki; itr++)
      std::cout << ks;
    std::cout << ks.substr(0, ni % ki) << '\n';
  }
  return 0;
}