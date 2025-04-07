/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{
    float A; 
    
    while (1) {
    
    printf("점수를 입력하세요.\n");
    scanf("%f", &A);
    
    if(A > 100 || A < 0){
    printf("다시 입력해주세요\n");
    continue;
    
    }
    
    int a = (int) A;
    switch(a / 10)
    {   
        case 10:
            printf("A등급\n");
            float C = {A + A / 10};
            printf("최종 점수: %f\n", C);
            break;
                
        case 9:
            printf("A등급\n");
            float D = {A + A / 10};
            printf("최종 점수: %f\n", D);
            break;
                
        case 8:
            printf("B등급\n");
            float B = {A + A / 20};
            printf("최종 점수: %f\n", B);
            break;
                
        case 7:
            printf("C등급\n");
            break;
                
        case 6:
            printf("D등급\n");
            break;
              
        default:
            printf("F등급\n");
    }
}
}