#include <iostream>
#include <vector>
#include <algorithm>

bool lastIsZero(const std::vector<int>& nums);

int main(void)
{
    int tests;
    std::cin >> tests;
    while (tests--)
    {
        int sz;
        std::cin >> sz;
        
        std::vector<int> nums(sz, 0);
        for (int itr = 0; itr < sz; itr++)
        {
            std::cin >> nums.at(itr);
        }
        
        while (!nums.empty() && lastIsZero(nums))
        {
            nums.pop_back();
        }
        
        std::reverse(nums.begin(), nums.end());
        while (!nums.empty() && lastIsZero(nums))
        {
            nums.pop_back();
        }
        
        int zeros = std::count(nums.begin(), nums.end(), 0);
        std::cout << zeros << '\n';
    }
    return 0;
}

bool lastIsZero(const std::vector<int>& nums)
{
    return !nums.back();
};
