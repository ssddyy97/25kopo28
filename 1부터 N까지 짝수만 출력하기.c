#include <stdio.h>

void main() {
    int num;
    printf("숫자를 입력하세요 : ");
    scanf("%d", &num);

    int i = 0;

    while (i < num) {
        i++;

        if (i % 2 == 1) {
            continue;
        }

        printf("%d ", i);
    }
}
