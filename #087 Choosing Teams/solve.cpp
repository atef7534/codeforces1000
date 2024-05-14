#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
  int size, k, team = 0, c = 0; cin >> size >> k;

  while (size--)
  {
    int x; cin >> x;
    
    if (x + k <= 5)
    {
      team++;
    }

    if (team == 3)
    {
      team = 0;
      c++;
    }
  }

  cout << c << "\n";
  return 0;
}