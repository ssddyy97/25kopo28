#include <stdio.h>

int main() {
    for (int i = 2020; i <= 2025; i++) {
        for (int j = 1; j <= 12; j++) {
            if (i == 2023 && j >= 2 && j <= 5) {
                continue;
            } else if (i == 2025 && j == 4) {
                printf("202504\n");
                break;
            }
            printf("%d%02d\n", i, j);
        }
    }

    return 0;
}
