#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
  int tt; cin >> tt;
  while (tt--)
  {
    vector<int> v(4);
    cin >> v[0] >> v[1] >> v[2] >> v[3];

    int c = 0;
    for (int i = 1; i < 4; i++)
    {
      c += (v[i] > v[0]);
    }
    
    cout << c << "\n";
  }

  return 0;
}