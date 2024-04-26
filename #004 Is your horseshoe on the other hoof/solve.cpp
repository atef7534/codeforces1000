#include <algorithm>
#include <iostream>

int main(void) {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int s1, s2, s3, s4;
    std::cin >> s1 >> s2 >> s3 >> s4;
    
    int arr[4] = {s1, s2, s3, s4};
    std::sort(arr, arr + 4);

    if (arr[0] == arr[3]) {
        std::cout << "3\n";
    } else if (arr[0] == arr[2]) {
        std::cout << "2\n";
    } else if (arr[0] == arr[1]) {
        if (arr[2] == arr[3]) {
            std::cout << "2\n";
        } else {
            std::cout << "1\n";
        }
    } else if (arr[1] == arr[3]) {
        std::cout << "2\n";
    } else if (arr[1] == arr[2]) {
        std::cout << "1\n";
    } else if (arr[2] == arr[3]) {
        std::cout << "1\n";
    } else {
        std::cout << "0\n";
    }
    return 0;
}