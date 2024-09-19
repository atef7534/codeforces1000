#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
  int t; cin >> t;
  while (t--) {
    long long s, a, b, c;
    cin >> s >> a >> b >> c;
    long long choc = s / c;
    cout << choc / a * (a + b) + choc % a << '\n';
  }
  return 0;
}
