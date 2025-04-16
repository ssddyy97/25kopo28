#include <stdio.h>

void tri(int num) {
    printf("입력값: ");
    scanf("%d", &num);

    int val = 1;

    for(int i = 1; i <= num; i++) {
        
        for(int j = 1; j <= num - i; j++) {
            printf(" ");
        }

        for(int k = 1; k <= i; k++) {
            printf("%d ", val);
            val++;
        }

        printf("\n");
    }

}

void main(){
    int num;
    tri(num);
}