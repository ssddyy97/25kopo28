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
    char *name = g.n[i], *sex = g.s[i], *hobby = u.h[i], *etc = u.e[i];
    int *age = &g.a[i];
    char temp[100];

  
    while (1) {
        printf("\n이름을 입력하세요: ");
        fgets(temp, sizeof(temp), stdin);
        if (sscanf(temp, "%9s", name) == 1) break;
        printf("이름을 정확히 입력해주세요.\n");
    }

 
    while (1) {
        printf("나이를 입력하세요: ");
        fgets(temp, sizeof(temp), stdin);
        if (sscanf(temp, "%d", age) == 1 && *age >= 0) break;
        printf("올바른 나이를 입력해주세요.\n");
    }

    while (1) {
        printf("성별을 입력하세요 (m/f): ");
        fgets(temp, sizeof(temp), stdin);
        if (sscanf(temp, "%9s", sex) == 1 && (strcmp(sex, "m") == 0 || strcmp(sex, "f") == 0)) break;
        printf("성별은 'm' 또는 'f'만 입력 가능합니다.\n");
    }

   
    printf("취미를 입력하세요: ");
    fgets(temp, sizeof(temp), stdin);
    if (sscanf(temp, "%9s", hobby) != 1) strcpy(hobby, "");

   
    printf("기타를 입력하세요: ");
    fgets(temp, sizeof(temp), stdin);
    if (sscanf(temp, "%9s", etc) != 1) strcpy(etc, "");
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
