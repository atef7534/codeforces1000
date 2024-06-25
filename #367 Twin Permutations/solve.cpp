#include <iostream>
#include <vector>

int main()
{
    int tests; 
    std::cin >> tests; 
    
    while (tests--)
    {
        int size; 
        std::cin >> size;
        
        std::vector<int> nums(size);
        for (int itr = 0; itr < size; itr++)
        {
            int x;
            std::cin >> x;
            std::cout << size - x + 1 << ' ';
        }
        std::cout << '\n';
    };
    return 0;
}