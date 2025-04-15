#include <stdio.h>
#include <string.h>

#define MAX 1000
#define TRUE 1

struct personalInfo {
    int age;
    char name[10];
    char sex[10];
};

union extraInfo {
    char hobby[10];
    char etc[10];
};

struct group {
    struct personalInfo personal;
    union extraInfo extra;
    int isHobby; 
};

struct group g[MAX] = {
    {{30, "hong", "m"}, {.hobby = "soccer"}, 1},
    {{25, "kim", "f"}, {.hobby = "music"}, 1},
    {{20, "park", "m"}, {.hobby = "movie"}, 1}
};

void input_data(int i) {
    char temp[100];

    while (TRUE) {
        printf("\n이름을 입력하세요: ");
        fgets(temp, sizeof(temp), stdin);
        if (sscanf(temp, "%9s", g[i].personal.name) == 1) {
            break;
        }
        printf("이름을 정확히 입력해주세요.\n");
    }

    while (TRUE) {
        printf("나이를 입력하세요: ");
        fgets(temp, sizeof(temp), stdin);
        if (sscanf(temp, "%d", &g[i].personal.age) == 1 && g[i].personal.age >= 0) {
            break;
        }
        printf("올바른 나이를 입력해주세요.\n");
    }

    while (TRUE) {
        printf("성별을 입력하세요 (m/f): ");
        fgets(temp, sizeof(temp), stdin);
        if (sscanf(temp, "%9s", g[i].personal.sex) == 1 && (strcmp(g[i].personal.sex, "m") == 0 || strcmp(g[i].personal.sex, "f") == 0)) {
            break;
        }
        printf("성별은 'm' 또는 'f'만 입력 가능합니다.\n");
    }

    while (TRUE) {
        printf("취미를 입력하시겠습니까? (y/n): ");
        fgets(temp, sizeof(temp), stdin);
        if (sscanf(temp, "%1s", temp) == 1) {
            if (strcmp(temp, "y") == 0) {
                printf("취미를 입력하세요: ");
                fgets(temp, sizeof(temp), stdin);
                sscanf(temp, "%9s", g[i].extra.hobby);
                g[i].isHobby = 1;
                break;
            } else if (strcmp(temp, "n") == 0) {
                printf("기타 정보를 입력하세요: ");
                fgets(temp, sizeof(temp), stdin);
                sscanf(temp, "%9s", g[i].extra.etc);
                g[i].isHobby = 0;
                break;
            }
        }
        printf("y 또는 n만 입력해주세요.\n");
    }
}

void print_all(int count) {
    printf("\n현재까지 입력된 정보:\n");
    for (int j = 0; j < count; j++) {
        printf("%d. %s / %d / %s / %s\n",
               j + 1,
               g[j].personal.name,
               g[j].personal.age,
               g[j].personal.sex,
               g[j].isHobby ? g[j].extra.hobby : g[j].extra.etc);
    }
}

void init_data() {
    print_all(3); 
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
