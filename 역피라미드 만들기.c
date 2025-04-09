/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()

{  
    int num;
    printf("값을 입력하세요:");
    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        for (int j = num - i; j > 0; j--) {
            printf("*");
        }
        printf("\n");
    } 
}
