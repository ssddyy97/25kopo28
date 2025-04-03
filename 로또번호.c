/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int data[6];
    int count = 0;

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

    // 정렬 (버블 정렬)
    for (int i = 0; i < 6 - 1; i++) {
        for (int j = 0; j < 6 - 1 - i; j++) {
            if (data[j] > data[j + 1]) {
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }

    // 출력
    for (int i = 0; i < 6; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    return 0;
}
