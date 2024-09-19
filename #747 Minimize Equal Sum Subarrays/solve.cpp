#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];
    for (int i = 1; i < n; i++)
      cout << a[i] << ' ';
    cout << a[0] << '\n';
  }
  return 0;
}
