#include <stdio.h>

void main() {
    int num;
    printf("입력값: ");
    scanf("%d", &num);
    printf("출력값: ");
    
    int f1 = 1;
    int f2 = 1;
    int f3;
    int sum = 0;
    int odd = 0; 
    int even = 0;

    for (int i = 0; i < num; i++) {
        if(i == 0) {
            printf("%d", f1); 
            sum += f1;
            odd += 1;
        } else if (i == 1) { 
            printf(" %d", f2);
            sum += f2;
            odd += 1;
        } else {
            f3 = f1 + f2;
            printf(" %d", f3);
            if(f3 % 2 == 0){
                even +=1;
            }
            if(f3 % 2 == 1){
                odd +=1;
            }
            sum += f3;
            f1 = f2;
            f2 = f3;
        }
    }
    printf("\n합계: %d\n", sum);
    printf("\n홀수 짝수: %d/ %d", odd, even);
}
