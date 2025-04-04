/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a;

    while (1) {
        printf("세 자리 정수를 입력하세요: ");
        scanf("%d", &a);
        while (getchar() != '\n');

        if (a < 100) {
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
