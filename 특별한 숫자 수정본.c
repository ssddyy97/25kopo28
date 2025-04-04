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
        printf("숫자를 입력하세요.\n");
        scanf("%d", &a);

        int b = a / 100;
        int c = (a % 100) / 10;
        int d = a % 10;

        int result = b + c + d;

        if (a >= 1000 || a <= 0)
            continue;
        else if (a % 3 == 0 && a % 2 == 1) {
            printf("특별한 숫자입니다");
        }
        else if (result % 7 == 0) {
            printf("특별한 숫자입니다");
        }
        else if (b > d) {
            printf("특별한 숫자입니다");
        }
        else {
            printf("보통숫자입니다");
        }
    }

    return 0;
}
