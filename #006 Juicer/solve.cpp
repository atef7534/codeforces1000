#include <iostream>

int main(void) {
    int oranges, blender, garbage;
    std::cin >> oranges >> blender >> garbage;

    int o[oranges]; for (int i = 0; i < oranges; i++) {
        std::cin >> o[i];
    }

    int times = 0, waste = 0;
    for (int i = 0; i < oranges; i++) {
        if (o[i] > blender) {
            continue;
        }
        waste += o[i];
        if (waste > garbage) {
            times += 1;
            waste = 0;
        }
    }


    std::cout << times << "\n";
    return 0;
}