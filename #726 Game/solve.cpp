#include <iostream>
#include <vector>
using namespace std;

int main(void) {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> a(n, 0);
    for (int itr = 0; itr < n; itr++)
      cin >> a.at(itr);
    int left = 0, right = n - 1;
    for (left; left < n && a.at(left); left++);
    for (right; right > -1 && a.at(right); right--);
    cout << max(0, right - left + 2) << '\n';
  }
  return 0;
}
