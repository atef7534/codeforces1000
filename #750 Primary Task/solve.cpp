#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
bool valid(string s);

int main(void) {
  int t;
  cin >> t;
  while (t--) {
    string s; cin >> s;
    if (s.size() <= 2 || !valid(s)) cout << "NO\n";
    else cout << "YES\n";
  }
  return 0;
}
bool valid(string s) {
  if (s.size() == 3 && s[2] == '1') return false;
  return (s[0] == '1' && s[1] == '0' && s.size() > 2 && s[2] != '0');
}