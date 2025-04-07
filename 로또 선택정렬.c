#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int data[6];
    int count = 0;

    // 중복 없이 랜덤 숫자 6개 생성 (1~45)
    while (count < 6) {
        int num = (rand() % 45) + 1;
        int is_duplicate = 0;

        for (int i = 0; i < count; i++) {
            if (data[i] == num) {
                is_duplicate = 1;
                break;
            }
        }

        if (!is_duplicate) {
            data[count] = num;
            count++;
        }
    }

    // 선택 정렬 (오름차순 정렬)
    int min, temp;
    for (int i = 0; i < 6 - 1; i++) {
        min = i;
        for (int j = i + 1; j < 6; j++) {
            if (data[j] < data[min]) {
                min = j;
            }
        }
        if (i != min) {
            temp = data[i];
            data[i] = data[min];
            data[min] = temp;
        }
    }

    // 출력
    for (int i = 0; i < 6; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    return 0;
}
