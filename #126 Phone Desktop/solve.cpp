#include <iostream>


using namespace std;
void solve();


int main(void)
{
  int tests; cin >> tests;
  while (tests--)
  {
    solve();
  }

  return 0;
}

void solve()
{
  int a, b; 
  cin >> a >> b;

  int icons = b / 2 + (b & 1);
  int rest = (icons * 15) - (b * 4);


  if (a <= rest)
  {
    cout << icons << "\n";
  }
  else
  {
    a -= rest;
    icons += (a / 15);
    if (a % 15)
    {
      icons++;
    }
    cout << icons << "\n";
  }
  return;
}