/**
 * author: atef_ai
 * created: 5 Aug 00:48
**/
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <limits>
int main(void) {
  int n;
  std::cin >> n;
  std::vector<std::vector<int>> a(n, std::vector<int>(n, 0));
  for (int itr = 0; itr < n; itr++) {
    for (int iitr = 0; iitr < n; iitr++) 
      std::cin >> a.at(itr).at(iitr);
  }
  std::vector<int> rows(n, 0), cols(n, 0);
  for (int itr = 0; itr < n; itr++) {
    int sOfRow = 0, sOfCol = 0;
    for (int iitr = 0; iitr < n; iitr++) {
      sOfRow += a.at(itr).at(iitr);
    }
    rows.at(itr) = sOfRow;
    for (int iitr = 0; iitr < n; iitr++) {
      sOfCol += a.at(iitr).at(itr);
    }
    cols.at(itr) += sOfCol;
  }
  int scores = 0;
  for (int itr = 0; itr < n; itr++) {
    for (int iitr = 0; iitr < n; iitr++) {
      if (cols.at(iitr) > rows.at(itr)) ++scores;
    }
  }
  std::cout << scores << '\n';
  return 0;
}