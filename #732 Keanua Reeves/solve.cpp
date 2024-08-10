#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
  int n; cin >> n;
  string s; cin >> s;
  if (n & 1) cout << "1\n" << s << '\n';
  else {
    int cnt = count(s.begin(), s.end(), '1');
    if (cnt * 2 == n) cout << "2\n" << s[0] << ' ' << s.substr(1) << '\n';
    else cout << "1\n" << s << '\n';
  }
  return 0;
}
