#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    // Fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,
        t;

    cin >> n >> t;

    vector<int> vec(n);
    int i, j;
    for (i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    // Solution - Two pointers
    long long sum = 0;
    int max_books = 0;
    j = 0;
    // 4 5
    // 3 1 2 1
    for (i = 0; i < n; i++)
    {
        sum += vec[i];
        while (sum > t && j <= i)
        {
            sum -= vec[j++];
        }
        max_books = max(max_books, i - j + 1);
    }
    cout << max_books << '\n';
    return 0;
}