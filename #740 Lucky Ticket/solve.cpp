#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
bool lucky(string s);
int sum(string s, int del, int n);
int main(void) {
  int n; cin >> n;
  string s; cin >> s;
  cout << (lucky(s) && sum(s, 2, n) * 2 == sum(s, 1, n) ? "YES\n" : "NO\n"); 
  return 0;
}
bool lucky(string s) {
  for (auto &c: s)
    if (c != '4' && c != '7') return false;
  return true;
}
int sum(string s, int del, int n) {
  int total = 0;
  for (int i = 0; i < n / del; i++) {
    total += int(s[i] - '0');
  }
  return total;
}