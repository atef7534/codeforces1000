#include <iostream>

using namespace std;

int main(void)
{
  int tests; cin >> tests;
  
  int mishka = 0, chris = 0;
  while (tests--)
  {
    int a, b; cin >> a >> b;
    
    mishka += (a > b) ? 1 : 0;
    chris += (b > a) ? 1 : 0;
  }

  if (mishka > chris)
  {
    cout << "Mishka\n";
  }
  else if (chris > mishka)
  {
    cout << "Chris\n";
  }
  else
  {
    cout << "Friendship is magic!^^\n";
  }
  return 0;
}