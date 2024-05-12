#include <algorithm>
#include <iostream>

using namespace std;

int main(void)
{
  int friends; cin >> friends;
  int bottles; cin >> bottles;
  int drink; cin >> drink;
  int limes; cin >> limes;
  int slices; cin >> slices;
  int salt; cin >> salt;
  int drinkr; cin >> drinkr;
  int saltr; cin >> saltr;

  int alldrink = bottles * drink;
  int allslices = limes * slices;

  int mn = min(alldrink / drinkr, min(allslices, salt / saltr));

  cout << mn / friends << "\n";
  return 0;
}