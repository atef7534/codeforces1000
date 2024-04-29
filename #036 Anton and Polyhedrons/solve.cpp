#include <iostream>
#include <map>
#include <string>

using std::map;
using std::cin;
using std::cout;
using std::string;

typedef long long LL;

int main(void) {
    map<string, int> stores;
    stores["Tetrahedron"] = 4;
    stores["Cube"] = 6;
    stores["Octahedron"] = 8;
    stores["Dodecahedron"] = 12;
    stores["Icosahedron"] = 20;

    int n; std::cin >> n;

    LL total = 0;
    while (n--) {
        string s; std::cin >> s;
        total += stores[s];
    }

    std::cout << total << "\n";
    return 0;
}