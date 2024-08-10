#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(void) {
  long long a, b, c;
  cin >> a >> b >> c;
  cout << min(a, b) * 2 + (a != b) + 2 * c << '\n';
  return 0;
}