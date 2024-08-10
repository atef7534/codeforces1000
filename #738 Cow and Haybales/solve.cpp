#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(void) {
  int t; cin >> t;
  while (t--) {
    int n, d;
    cin >> n >> d;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a.at(i);
    for (int i = 1; i < n; i++) {
      while (i <= d && a.at(i)) {
        a.at(i)--, a.at(0)++;
        d -= i;
      } 
    }
    cout << a.at(0) << '\n';
  }
  return 0;
}
