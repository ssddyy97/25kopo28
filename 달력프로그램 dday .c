#include <stdio.h>
#include <time.h>

int getStartDay(int year, int month);

enum day {sun, mon, tue, wed, thu, fri, sat};
enum month {jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec};

char *month_names[] = {"", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
char *day_names[] = {"s", "m", "t", "w", "t", "f", "s"};


void dday_from_ymd(int ymd)
{
    int year = ymd / 10000;
    int month = (ymd / 100) % 100;
    int day = ymd % 100;

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
    int days = (int)(diff_seconds / (60 * 60 * 24));
    
    if (days > 0) {
        printf(" D-%d일 남았습니다.\n", days);
    } else if (days == 0) {
        printf("오늘이 D-day입니다!\n");
    } else {
        printf("D+%d일 지났습니다.\n", -days);
    }
}


void calender(int year, int month)
{
    int end[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (month < jan || month > dec) {
        printf("잘못된 월입니다.\n");
        return;
    }

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        end[feb] = 29;
    }

    int week = getStartDay(year, month);

    printf("\n\n           %d year \n%s\n", year, month_names[month]);
    printf("============================\n");

    for (int i = sun; i <= sat; i++) {
        printf("%4s", day_names[i]);
    }
    printf("\n");

    for (int space = 0; space < week; space++) {
        printf("    ");
    }

    for (int d = 1; d <= end[month]; d++) {
        printf("%4d", d);
        week++;
        if (week > sat) {
            printf("\n");
            week = sun;
        }
    }

    printf("\n\n");
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
    int year, month, ymd;

    printf("연도를 입력하세요: ");
    scanf("%d", &year); 
    printf("월을 입력하세요: ");
    scanf("%d", &month); 
    printf("날짜를 입력하세요: ");
    scanf("%d", &ymd); 

    calender(year, month);
    dday_from_ymd(ymd);

    return 0;
}









