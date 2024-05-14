#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
  int tests; cin >> tests;

  vector<int> v;
  for (int i = 1; i < 1667; i += 3)
  {
    if (i % 10 != 3)
    {
      v.push_back(i);
    }
    if ((i + 1) % 10 != 3)
    {
      v.push_back(i + 1);
    }
  }
  while (tests--)
  {
    int k; cin >> k;    
    cout << v[k - 1] << "\n";
  }
  return 0;
}
