#include <stdio.h>
#include <string.h>
#define MAX 1000

struct group {
    int a[MAX];
    char n[MAX][10], s[MAX][10], h[MAX][10];
} g = {
    {30, 25, 20},
    {"hong", "kim", "park"},
    {"m", "f", "m"},
    {"soccer", "music", "movie"}
};

void input_data(int i) {
    char *name = g.n[i], *sex = g.s[i], *hobby = g.h[i];
    int *age = &g.a[i];
    printf("\n[이름 나이 성별 취미]를 입력하세요:\n");
    while (1) {
        char temp[10];
        if (scanf("%9s", temp) != 1) continue;
        if (strcmp(temp, "exit") == 0) {
            g.a[i] = -1; 
            return;
        }
        strcpy(name, temp);
        if (scanf("%d %9s %9s", age, sex, hobby) != 3) {
            printf("입력 형식이 잘못되었습니다. 다시 입력해주세요.\n");
            while (getchar() != '\n'); continue;
        }
        if (*age < 0) {
            printf("나이는 음수가 될 수 없습니다. 다시 입력해주세요.\n"); continue;
        }
        if (strcmp(sex, "m") != 0 && strcmp(sex, "f") != 0) {
            printf("성별은 'm' 또는 'f'로 입력해야 합니다. 다시 입력해주세요.\n"); continue;
        }
        break;
    }
}

void print_all(int count) {
    printf("\n 현재까지 입력된 정보:\n");
    for (int j = 0; j < count; j++) {
        if (g.a[j] == -1) break; 
        printf("%d. %s / %d / %s / %s\n", j + 1, g.n[j], g.a[j], g.s[j], g.h[j]);
    }
}

int main() {
    int i = 0;
    for (; i < 3; i++)
        printf("%d. %s / %d / %s / %s\n", i + 1, g.n[i], g.a[i], g.s[i], g.h[i]);

    while (i < MAX) {
        input_data(i);
        if (g.a[i] == -1) break;  
        print_all(++i);
    }

    return 0;
}
