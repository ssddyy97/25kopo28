#include <stdio.h>

int main() {
    for (int i = 2020; i <= 2025; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i == 2023 && j != 1) {
                continue;
            } else {
                printf("%d0%d\n", i, j);
            }
        }
    }

    return 0;
}
