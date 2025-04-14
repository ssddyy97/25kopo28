#include <stdio.h>
#include <string.h>
#define MAX 1000

struct group {
    int a[MAX];
    char n[MAX][10], s[MAX][10], h[MAX][10];
} g = {
    {30, 25, 20},
    {"hong", "kim", "park"},
    {"m", "f", "m"}
};

union unist {
    char h[MAX][10];
    char e[MAX][10];
} u = {{"soccer", "music", "movie"}}; 


void input_data(int i) {
    char *name = g.n[i], *sex = g.s[i], *hobby = u.h[i];
    char *etc = u.e[i];
    int *age = &g.a[i];  

    printf("\n이름 나이 성별 취미 기타를 입력하세요:\n");

    while (1) {
        if (scanf("%9s %d %9s %9s %9s", name, age, sex, hobby, etc) != 5) {
            printf("입력 형식이 잘못되었습니다. 다시 입력해주세요.\n");
            while (getchar() != '\n');
            continue;
        }
        
        if (*age < 0) {
            printf("나이는 음수가 될 수 없습니다. 다시 입력해주세요.\n");
            continue;
        }
        
        if (strcmp(sex, "m") != 0 && strcmp(sex, "f") != 0) {
            printf("성별은 'm' 또는 'f'로 입력해야 합니다. 다시 입력해주세요.\n");
            continue;
        }
        break;
    }
}

void print_all(int count) {
    printf("\n 현재까지 입력된 정보:\n");
    for (int j = 0; j < count; j++) {
        printf("%d. %s / %d / %s / %s / %s\n", j + 1, g.n[j], g.a[j], g.s[j], u.h[j], u.e[j]);
    }
}

void init_data() {
    for (int i = 0; i < 3; i++) {
        printf("%d. %s / %d / %s / %s / %s\n", i + 1, g.n[i], g.a[i], g.s[i], u.h[i], u.e[i]);
    }
}

void start_input() {
    for (int i = 3; i < MAX; i++) {
        input_data(i);
        print_all(i + 1);
    }
}

int main() {
    init_data();
    start_input();
    return 0;
} 
