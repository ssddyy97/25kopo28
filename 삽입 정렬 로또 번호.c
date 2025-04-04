#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int data[6];
    int count = 0;

    // 로또 번호 생성 (중복 없이)
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

    // 삽입 정렬
    for (int i = 1; i < 6; i++) {
        int key = data[i];
        int j = i - 1;

        while (j >= 0 && data[j] > key) {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = key;
    }

    // 출력
    printf("정렬된 로또 번호: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    return 0;
}

