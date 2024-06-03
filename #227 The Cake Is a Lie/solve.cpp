#include <iostream>

int main(void)
{
  int t;
  std::cin >> t;

  while (t--)
  {
    int n, m, k;
    std::cin >> n >> m >> k;

    int t1 = n - 1 + n * (m - 1);
    int t2 = m - 1 + m * (n - 1);
    
    if (t1 == k || t2 == k)
      std::cout << "YES\n";
    else
      std::cout << "NO\n";
  }
  return 0;
}

/*
  1 1
  1 1
*/