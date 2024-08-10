#include <iostream>
#include <string>
using namespace std;

int main(void) {
  int number; cin >> number;
  string s = "";
  for (int itr = 0; itr <= number; itr++)
    s += to_string(itr);
  cout << s[number] << '\n';
  return 0;
}
