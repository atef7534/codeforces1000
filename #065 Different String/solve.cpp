#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool valid(string s);

int main(void)
{
    int tests; cin >> tests;
    while (tests--) 
    {
        string s; cin >> s;
        if (valid(s)) 
        {
            cout << "YES\n";
            int a = -1, b = -1;
            for (int i = 0; s[i] != '\0'; i++) {
                if (a == -1) {
                    a = i;
                } else {
                    if (s[i] != s[a]) {
                        b = i;
                        break;
                    }
                }
            }
            cout << s[b] + s.substr(0, a + 1) + s.substr(a + 1, b - a - 1) + s.substr(b + 1) << "\n";
        } else 
        {
            cout << "NO\n";
        }
    }
}

bool valid(string s)
{
    vector<int> v(26, 0);
    for (int i = 0; s[i] != '\0'; i++) {
        int index = int(s[i] - 'a');
        v[index]++;
    }

    int c = count_if(v.begin(), v.end(), [](int a) 
    {
        return a > 0;
    });

    return c > 1;
}