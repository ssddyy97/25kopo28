#include <stdio.h>

int main() {
    int n, m;

    printf("m을 입력하세요: ");
    scanf("%d", &m);

    printf("n을 입력하세요: ");
    scanf("%d", &n);

    for (int i = m; i <= n; i++) {
        int temp = i;
        int has_seven = 0;

        while (temp > 0) {
            if (temp % 10 == 7) {
                has_seven = 1;
                break;
            }
            temp /= 10;
        }

        if (i % 7 == 0 || has_seven) {
            continue;
        } else if (i % 5 == 0) {
            break;
        } else {
            printf("%d ", i);
        }
    }

    return 0;
}
