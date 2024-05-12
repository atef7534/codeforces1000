#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
  int tests; cin >> tests;
  while (tests--)
  {
    int num, t = 10, n = 1, c; cin >> num;

    vector<int> v;
    while (t <= num)
    {
      c = (num % t) / (t / 10);
      if (c) 
      {
        v.push_back(c * (t / 10));
        n++;
      }
      t *= 10;
    }
    c = (num % t) / (t / 10);
    v.push_back(c * (t / 10));

    cout << n << "\n";
    for (int i = 0; i < n; i++)
    {
      cout << v[i] << " ";
    }
    cout << "\n";
  }

  return 0;
}