#include <stdio.h>

int main() {
    int watermelons = 1020;
    int days = 0;
    while (watermelons > 0) {
        watermelons = watermelons / 2 - 2;
        days++;
    }
    printf("��Ҫ %d ����ܰ����е��������ꡣ\n", days);
    return 0;
}
