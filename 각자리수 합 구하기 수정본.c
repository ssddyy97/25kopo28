#include <stdio.h>

int main()
{
    int a;

    while (1) {
        printf("세 자리 정수를 입력하세요: ");

        if (scanf("%d", &a) != 1) {
            printf("정수가 아닙니다. 다시 입력하세요.\n");
            while (getchar() != '\n'); // 버퍼 비우기
            continue;
        }

        if (a < 100 || a > 999) {
            printf("세 자리 정수가 아닙니다. 다시 입력하세요.\n");
            continue;
        }

        int b = a / 100;
        int c = (a % 100) / 10;
        int d = a % 10;

        int result = b + c + d;

        printf("각 자리수의 합: %d\n", result);
    }

    return 0;
}
