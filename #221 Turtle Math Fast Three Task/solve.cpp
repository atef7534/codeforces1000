#include <iostream>
#include <vector>

int main(void)
{
  int t;
  std::cin >> t;

  while (t--)
  {
    int n, s = 0, i;
    std::cin >> n;

    std::vector<int> a(n);
    for (i = 0; i < n; i++) { std::cin >> a[i]; s += a[i]; }
    s %= 3;
    if (!s) { std::cout << "0\n"; continue; }
    if (!(n - 1) || !(s - 2)) { std::cout << "1\n"; continue; }
    bool o = false; 
    for (i = 0; i < n; i++) 
    { 
      if (s == a[i] % 3) 
      { 
        o = true; 
        break; 
      } 
    }
    std::cout << (o ? "1\n" : "2\n");
  }
  return 0;
}