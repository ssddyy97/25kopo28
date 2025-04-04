/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    while (1) {

        int a = 0;
        int b = 0;
        int c = 0;

        printf("a의 값을 입력하시오: ");
        scanf("%d", &a);
        while (getchar () != '\n');

        printf("b의 값을 입력하시오: ");
        scanf("%d", &b);
        while (getchar () != '\n');

        printf("c의 값을 입력하시오: ");
        scanf("%d", &c);
        while (getchar () != '\n');

        if (c == 0) {
            printf("다시 입력해주세요.\n");
            continue;
        }

        int result = (a + b) * c - (a - b) / c;

        printf("결과: %d\n", result);
    }

    return 0;
}
