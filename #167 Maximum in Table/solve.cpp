#include <iostream>
#include <vector>

int main(void)
{
  int n;
  std::cin >> n;

  std::vector<std::vector<int>> a(n, std::vector<int>(n, 1));
  for (int i = 1; i < n; i++)
    for (int j = 1; j < n; j++)
      a[i][j] = a[i][j - 1] + a[i - 1][j];

  std::cout << a[n - 1][n - 1] << "\n";
  return 0;
}