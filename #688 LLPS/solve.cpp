/**
 * author: atef_ai
 * created: 31 Jul 12:26
**/
#include <iostream>
#include <vector>
int main(void) {
  std::string s; std::cin >> s;
  /* solution */
  std::vector<int> f(26, 0);
  for (int itr = 0; s[itr] != '\0'; itr++)
    f.at(int(s[itr] - 'a'))++;
  int mn = s[0] - 'a';
  for (int itr = 0; itr < 26; itr++) {
    if (mn < itr && f.at(itr))
      mn = itr;
  }
  char c = mn + 'a';
  for (int itr = 0; itr < f.at(mn); itr++)
    std::cout << c;
  std::cout << '\n';
  return 0;
}