#include <stdio.h>

int main() {
    int watermelons = 1020;
    int days = 0;
    while (watermelons > 0) {
        watermelons = watermelons / 2 - 2;
        days++;
    }
    printf("需要 %d 天才能把所有的西瓜卖完。\n", days);
    return 0;
}
