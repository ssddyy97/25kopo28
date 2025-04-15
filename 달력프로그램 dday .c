#include <stdio.h>
#include <time.h>

int getStartDay(int year, int month);

enum day {sun, mon, tue, wed, thu, fri, sat};
enum month {jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec};

char *month_names[] = {"", "1월", "2월", "3월", "4월", "5월", "6월", "7월", "8월", "9월", "10월", "11월", "12월"};
char *day_names[] = {"일", "월", "화", "수", "목", "금", "토"};

void times(int year, int month, int day)
{
    struct tm target = {0};
    time_t now_t = time(NULL);
    struct tm *now_tm = localtime(&now_t);

    target.tm_year = year - 1900;
    target.tm_mon = month - 1;
    target.tm_mday = day;
    target.tm_hour = 0;
    target.tm_min = 0;
    target.tm_sec = 0;

    now_tm->tm_hour = 0;
    now_tm->tm_min = 0;
    now_tm->tm_sec = 0;
    now_t = mktime(now_tm);

    time_t target_t = mktime(&target);
    double diff_seconds = difftime(target_t, now_t);
    int days_left = (int)(diff_seconds / (60 * 60 * 24));

    if (days_left > 0){
        printf("\nD-%d일 남았습니다.\n", days_left);
    } else if (days_left == 0){
        printf("\n오늘이 D-day입니다!\n");
    } else {
        printf("\nD+%d일 지났습니다.\n", -days_left);
    }
}

void calender(void)
{
    int end[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
    int year, input_month, input_day;
    enum month month;

    printf("year을 입력하세요: ");
    scanf("%d", &year);
    printf("month를 입력하세요: ");
    scanf("%d", &input_month);
    printf("day를 입력하세요: ");
    scanf("%d", &input_day);

    if (input_month < jan || input_month > dec) {
        printf("잘못된 월입니다.\n");
        return;
    }

    month = (enum month)input_month;

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
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

    printf("\n");

    times(year, input_month, input_day);  
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

    int h = (q + 13 * (m + 1) / 5 + k + k / 4 + j / 4 + 5 * j) % 7;
    return (h + 6) % 7;
}

int main() {
    calender();  
    return 0;
}



