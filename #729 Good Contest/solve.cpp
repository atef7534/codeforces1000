#include <iostream>
#include <string>
using namespace std;

int main(void) {
  int t; cin >> t;
  string res = "NO\n";
  while (t--) {
    string name;
    int rateBefore, rateAfter;
    cin >> name >> rateBefore >> rateAfter;
    res = (rateBefore >= 2400 && rateAfter > rateBefore ? "YES\n" : res);
  }
  cout << res;
  return 0;
}
