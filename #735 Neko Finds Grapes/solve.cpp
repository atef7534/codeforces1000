#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);
  int odds_a = 0, odds_b = 0;
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
    odds_a += (a.at(i) & 1);
  }
  for (int j = 0; j < m; j++) {
    cin >> b.at(j);
    odds_b += (b.at(j) & 1);
  }
  cout << min(odds_a, m - odds_b) + min(odds_b, n - odds_a) << '\n';
  return 0;
}
