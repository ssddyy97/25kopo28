#include <stdio.h>

union num {
    int inVal;
    float floatVal;
    char charVal;
};

int main()
{
    union num n;

  
    printf("intVal 값을 입력하세요: ");
    scanf("%d", &n.inVal);
    printf("intVal = %d, 주소 = %p\n", n.inVal, (void*)&n.inVal);

   
    printf("\nfloatVal 값을 입력하세요: ");
    scanf("%f", &n.floatVal);
    printf("floatVal = %f, 주소 = %p\n", n.floatVal, (void*)&n.floatVal);

   
    printf("\ncharVal 값을 입력하세요: ");
    scanf(" %c", &n.charVal); 
    printf("charVal = %c, 주소 = %p\n", n.charVal, (void*)&n.charVal);

    printf("\n최종 상태 확인)\n");
    printf("intVal = %d\n", n.inVal);
    printf("floatVal = %f\n", n.floatVal);
    printf("charVal = %c\n", n.charVal);

    return 0;
}
