#include <iostream>
#include <string>


int main(void)
{
  int t;
  std::cin >> t;

  while (t--)
  {
    int n, j = 0, i;
    std::cin >> n;

    std::string s, meow = "meow";
    std::cin >> s;

    for (i = 0; i < n; i++)
      s[i] = tolower(s[i]);

    bool y = true;
    for (i = 0; i < n; i++)
    {
      if (s[i] == meow[j]) 
      {
        while (s[i] == meow[j])
          i++;
        i--;
        j++;
      }
      else break;
    }
    std::cout <<  (i == n && j == 4 ? "YES\n" : "NO\n"); 
  }
  return 0;
}