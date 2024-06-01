#include <iostream>

typedef long long ll;

int main(void)
{
  int tt = 1;
  
  while (tt--)
  {
    ll a, b;
    std::cin >> a >> b;
    
    ll mn = std::min(a, b), ans = 1;
    while (mn > 0) {
      ans *= mn;
      mn--;
    }
    
    std::cout << ans << "\n";
  }
  return 0;
}