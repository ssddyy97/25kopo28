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
    
    while (1){
    
    printf("온도를 입력하세요.\n");
    scanf("%f", &A);
    
    if(A < 0){
        
        printf("한파 경고! 패딩과 장갑, 모자를 착용하세요/n");
        break;
    }
    
    float r = {A / 5};
    int R = (int)r;
    switch(R)
    {   
        
            case 0:
                printf("매우 춥습니다! 두꺼운 외투를 꼭 입으세요\n");
                break;
                
            case 1:
                
            case 2:
                printf("조금 쌀쌀합니다 따뜻한 옷을 입으세요\n");
                break;
                
            case 3:
                
            case 4:
                printf("신선한 날씨 입니다! 가벼운 겉옷을 챙기세요\n");
                break;
                
            case 5:
                printf("따뜻한 날씨입니다! 가벼운 옷을 입으세요\n");
                break;  
        
            default:
                printf("너무 더워요! 반팔과 반바지를 입으세요\n");
                break;
           
           
    }
}
}