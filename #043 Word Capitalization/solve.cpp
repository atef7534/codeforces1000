#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string s; cin >> s;
    s[0] = toupper(s[0]);
    cout << s << "\n";
    return 0;
}