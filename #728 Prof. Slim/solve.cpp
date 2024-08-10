#include <iostream>
#include <vector>
using namespace std;

int main(void) {
  int t; cin >> t;
  while (t--) {
    int n, negatives = 0, right; cin >> n;
    right = n - 1;
    vector<int> a(n, 0);
    for (int itr = 0; itr < n; itr++) {
      cin >> a.at(itr);
      negatives += (a.at(itr) < 0);
    }
    string res = "YES\n";
    for (int itr = 0; itr < negatives; itr++) {
      if (a.at(itr) < 0) continue;
      while (right > itr && a.at(right) > 0) right--;
      a.at(itr) *= -1, a.at(right) *= -1;
    }
    for (int itr = 0; itr + 1 < n; itr++) 
      if (a.at(itr) > a.at(itr + 1)) { res = "NO\n"; break; }
    cout << res;
  }
  return 0;
}
