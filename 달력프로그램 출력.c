#include <stdio.h>

int getStartDay(int year, int month);

enum day {sun, mon, tue, wed, thu, fri, sat};
enum month {jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec};

char *month_names[] = {"", "1월", "2월", "3월", "4월", "5월", "6월", "7월", "8월", "9월", "10월", "11월", "12월"};

char *day_names[] = {"일", "월", "화", "수", "목", "금", "토"};

void calender(void)
{
    int end[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
    int year, input_month;
    enum month month;

    printf("year을 입력하세요: ");
    scanf("%d", &year);
    printf("month를 입력하세요: ");
    scanf("%d", &input_month);

    if (input_month < jan || input_month > dec) {
        printf("잘못된 월입니다.\n");
        return;
    }

    month = (enum month)input_month;

   
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        end[feb] = 29;
    }
    int week = getStartDay(year, month);
    
    printf("\n\n        %d년 %s\n", year, month_names[month]);
    printf("==========================\n");

    for (int i = sun; i <= sat; i++) {
        printf("%s  ", day_names[i]);
    }
    printf("\n");

    for (int space = 0; space < week; space++) {
        printf("    ");
    }

    for (int d = 1; d <= end[month]; d++) {
        printf("%2d  ", d);
        week++;
        if (week > sat) {
            printf("\n");
            week = sun;
        }
    }

    return;
}

int getStartDay(int year, int month)
{
    if (month < 3) {
        month += 12;
        year--;
    }

    int q = 1;
    int m = month;
    int k = year % 100;
    int j = year / 100;

    int h = (q + 13*(m + 1)/5 + k + k/4 + j/4 + 5*j) % 7;

    int day = (h + 6) % 7;
    return day;
}

int main(){
    
    calender();
    return 0;
    
}
