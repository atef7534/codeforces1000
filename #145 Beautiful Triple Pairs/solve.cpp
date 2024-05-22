#include <iostream>
#include <map>
#include <vector>

int main(void)
{
  int tt;
  std::cin >> tt;

  while (tt--)
  {
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++)
      std::cin >> a[i];
    
    long long ans = 0;
    std::map<std::vector<int>, int> cnt;

    for (int i = 0; i < n - 2; i++)
    {
      std::vector<int> triplet{a[i], a[i + 1], a[i + 2]};
      std::vector<std::vector<int>> mist(3, std::vector<int>(3, 0));
      
      mist[0] = std::vector<int>{0, a[i + 1], a[i + 2]};
      mist[1] = std::vector<int>{a[i], 0, a[i + 2]};
      mist[2] = std::vector<int>{a[i], a[i + 1], 0};

      for (auto &trip : mist)
      {
        ans += cnt[trip] - cnt[triplet];
        cnt[trip]++;
      }
      cnt[triplet]++;
    }

    std::cout << ans << '\n';
  }
  return 0;
}