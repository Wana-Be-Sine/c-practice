#include <stdio.h>

int main() {
    int count = 0;
    for (int x = 0; x <= 20; x++) {
        for (int y = 0; y <= 33; y++) {
            int z = 100 - x - y;
            if (z % 3 == 0 && (5 * x + 3 * y + z / 3 == 100)) {
                printf("公鸡: %d 只, 母鸡: %d 只, 小鸡: %d 只\n", x, y, z);
                count++;
            }
        }
    }
    printf("有%d种买法", count);
    return 0;
}