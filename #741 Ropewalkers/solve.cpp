#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(void) {
  vector<long long> a(3, 0);
  cin >> a.at(0) >> a.at(1) >> a.at(2);
  sort(a.begin(), a.end());
  long long d; cin >> d;
  cout << max(0ll, d - (a.at(1) - a.at(0))) + max(0ll, d - (a.at(2) - a.at(1))) << '\n'; 
  return 0;
}