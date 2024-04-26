#include <iostream>

int main(void) {
    int n, count = 0;
    long long init; 
    std::cin >> n >> init;
    
    while (n--) {
        char c;
        int cc;
        std::cin >> c >> cc;
        if (c == '-') {
            if (cc > init) {
                count++;
                continue;
            }
            init -= cc;
        } else {
            init += cc;
        }
    }
    std::cout << init << " " << count << "\n";
    return 0;
}