/**
 * author: atef_ai
 * created: 28 Jul 20:34
**/
#include <iostream>
#include <vector>
int main(void) {
  int t; std::cin >> t;
  while (t--) {
    int size; std::cin >> size;
    std::vector<int> a(size, 0);
    for (int itr = 0; itr < size; itr++)
      std::cin >> a.at(itr);
    /* solution */
    int mn = 0;
    for (int itr = 0; itr < size; itr++) {
      if (a.at(itr) < a.at(mn)) {
        mn = itr;
      }
    }
    std::cout << (mn ? "NO\n" : "YES\n");
  }
  return 0;
}