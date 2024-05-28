#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main(void)
{
  int tt = 1;

  while (tt--)
  {
    int n;
    std::cin >> n;

    std::string s;
    std::cin >> s;

    std::vector<int> freq(26, 0);
    for (auto &c: s)
      freq[c - 'a']++;
    
    int o, z;
    o = std::min({freq['o' - 'a'], freq['n' - 'a'], freq['e' - 'a']});
    freq['o' - 'a'] -= o;
    freq['e' - 'a'] -= o;

    z = std::min({freq['z' - 'a'], freq['e' - 'a'], freq['r' - 'a'], freq['o' - 'a']});
    while (o--)
      std::cout << 1 << " ";
    
    while (z--)
      std::cout << 0 << " ";
    std::cout << "\n";
  } 
  return 0;
}