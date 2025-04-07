/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int a;   
    printf("숫자를 입력하세요.\n");
    scanf("%d", &a);


    switch(a)
    {   
 
        case 0:
            printf("A\n");
            break;
                
        case 1:
            printf("B\n");
            break;
                
        case 2:
            printf("C\n");
            break;    
        case 3:
            printf("D\n");
            break;
                
        case 4:
            printf("E\n");
            break;
                
        case 5:
            printf("F\n");
            break;
                
        case 6:
            printf("G\n");
            break;
                
        case 7:
            printf("H\n");
            break;
                
        case 8:
            printf("I\n");
            break;
                
        case 9:
            printf("J\n");
            break;
                
        default:
            printf("잘못된 입력입니다");
    }
}