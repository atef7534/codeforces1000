#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
  int n;
  cin >> n;
  vector<int> a(601, 0);
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    if (!x) continue;
    a.at(x) = 1;
  }
  cout << count(a.begin(), a.end(), 1) << '\n';
  return 0;
}
