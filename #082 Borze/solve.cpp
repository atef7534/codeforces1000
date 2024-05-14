#include <iostream>
#include <string>

using namespace std;


int main(void)
{
  string s; cin >> s;

  for (int i = 0; s[i] != '\0'; i++) 
  {
    if (s[i] == '.') 
    {
      cout << "0";
    }
    else 
    {
      if (s[i + 1] == '-')
      {
        cout << "2";
      }
      else
      {
        cout << "1";
      }
      i++;
    }
  }
  cout << "\n";

  return 0;
}