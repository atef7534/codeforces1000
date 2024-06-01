#include <iostream>
#include <vector>

int main(void)
{
  int t;
  std::cin >> t;

  while (t--)
  {
    std::vector<int> a(7, 0);
    for (int i = 0; i < 7; i++)
      std::cin >> a[i];
    int n1 = a[6] - (a[0] + a[1]);
    int n2 = a[5] - n1;
    int n3 = a[6] - n1 - n2;

    std::cout << n1 << " " << n2 << " " << n3 << "\n";
  }
  return 0;
}