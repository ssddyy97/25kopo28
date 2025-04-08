/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 퀵 정렬을 위한 파티셔닝 함수
int partition(int data[], int low, int high) {
    int pivot = data[high]; // 마지막 요소를 pivot으로 설정
    int i = low - 1; // i는 pivot보다 작은 요소의 마지막 인덱스를 추적

    for (int j = low; j < high; j++) {
        if (data[j] < pivot) { // pivot보다 작은 값을 발견하면
            i++; // i를 증가시키고
            int temp = data[i];
            data[i] = data[j]; // 작은 값과 i번째 값을 교환
            data[j] = temp;
        }
    }

    // pivot을 정렬된 위치에 놓기
    int temp = data[i + 1];
    data[i + 1] = data[high];
    data[high] = temp;

    return i + 1; // pivot의 인덱스를 반환
}

// 퀵 정렬 함수
void quickSort(int data[], int low, int high) {
    if (low < high) {
        int pi = partition(data, low, high); // pivot의 올바른 위치를 찾기
        quickSort(data, low, pi - 1); // pivot의 왼쪽 부분 재귀적으로 정렬
        quickSort(data, pi + 1, high); // pivot의 오른쪽 부분 재귀적으로 정렬
    }
}

int main() {
    srand(time(NULL));
    int data[6];
    int count = 0;

    while (count < 6) {
        int num = (rand() % 45) + 1;
        int is_duplicate = 0;

        // 중복 검사
        for (int i = 0; i < count; i++) {
            if (data[i] == num) {
                is_duplicate = 1;
                break;
            }
        }

        // 중복이 없으면 배열에 추가
        if (!is_duplicate) {
            data[count] = num;
            count++;
        }
    }

    // 퀵 정렬 호출
    quickSort(data, 0, 5);

    // 출력
    for (int i = 0; i < 6; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    return 0;
}
