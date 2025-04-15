#include <stdio.h>

enum CarType {
    SEDAN = 1,
    SUV,
    TRUCK,
    VAN
};

int main() {
    int input;
    
    printf("차량 종류를 선택하세요:\n");
    printf("1. SEDAN\n");
    printf("2. SUV\n");
    printf("3. TRUCK\n");
    printf("4. VAN\n");
    printf("선택 (숫자 입력): ");
    scanf("%d", &input);

    switch (input) {
        case SEDAN:
            printf("선택한 차량 종류는 SEDAN입니다.\n");
            break;
        case SUV:
            printf("선택한 차량 종류는 SUV입니다.\n");
            break;
        case TRUCK:
            printf("선택한 차량 종류는 TRUCK입니다.\n");
            break;
        case VAN:
            printf("선택한 차량 종류는 VAN입니다.\n");
            break;
        default:
            printf("잘못된 입력입니다. 1~4 사이의 숫자를 입력해주세요.\n");
    }

    return 0;
}
