#include <iostream>
#include <cmath>
#include <vector>

template<typename T>
std::ostream& operator<<(std::ostream& os, std::vector<T>& v)
{
  for (size_t i = 0; i < v.size(); i++)
    os << v[i] << " ";
  return os;
}

int main(void)
{
  int tt;
  std::cin >> tt;

  while (tt--)
  {
    int n;
    std::cin >> n;
    
    std::vector<int> a;
    for (int i = 1; i <= n; i++)
      a.push_back(std::pow(2, i));
    
    long long sum1 = 0, sum2 = 0;
    while (!a.empty())
    {
      sum1 += a.back();
      a.pop_back();

      if (a.empty())
        break;

      sum2 += a.back();
      a.pop_back();

      if (a.empty())
        break;
      
      sum2 += a.back();
      a.pop_back();
    }

    std::cout << abs(sum1 - sum2) << "\n";
  }
  return 0;
}
