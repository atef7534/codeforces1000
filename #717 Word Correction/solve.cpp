/**
 * author: atef_ai
 * created: 4 Aug 12:45
**/
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
int main(void) {
  int n;
  std::cin >> n;
  std::string s;
  std::cin >> s;
  std::string vowels = "aeiouy", corr = "";
  for (int itr = 0; itr < n; itr++) {
    char c = s[itr];
    if (corr != "") {
      if (vowels.find(corr.back()) != std::string::npos && vowels.find(c) != std::string::npos) continue;
      corr += c;
    } else corr += c;
  }
  std::cout << corr << '\n';
  return 0;
}