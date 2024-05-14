#include <iostream>
#include <cmath>

using namespace std;

bool prime(int num);

int main(void)
{
  int n; cin >> n;
  
  int i = 4;
  while ((prime(i) || prime(n - i)) && i < n)
  {
    i++;
  }
  cout << i << " " << n - i << "\n";
  return 0;
}

bool prime(int num)
{
  for (int i = 2; i * i <= num; i++)
  {
    if (!(num % i))
    {
      return false;
    }
  }

  return true;
}