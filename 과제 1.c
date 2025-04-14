#include <stdio.h>
#define TRUE 1
#define FALSE 0

struct group { int a[1000]; char n[1000][10], s[1000][10], h[1000][10]; } 
                g = { {30,25,20}, {"hong","kim","park"}, {"m","f","m"}, {"soccer","music","movie"} };


int main() {
    int i = 0; 
    while(TRUE){
  
        char *name = g.n[i], *sex = g.s[i], *hobby = g.h[i]; 
        int *age = &g.a[i];
        i++;
        if(i <= 3){
            printf("%d. %s / %d / %s / %s\n", i, name, *age, sex, hobby);
        } else if (i >= 3) { printf("\n이름/나이/성별/취미 입력\n"); 
            scanf("%s\n%d\n%s\n%s", name, age, sex, hobby);
                for (int j = 0; j < i; j++){
                    printf("%d. %s / %d / %s / %s\n", j + 1, *(g.n + j), *(g.a + j),* (g.s + j), *(g.h + j));
                }
        }
    }   
}

    

    