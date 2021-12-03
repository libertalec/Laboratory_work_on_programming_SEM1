#include <stdio.h>
#include <time.h>

int main()
{
    FILE * list  = fopen("../list.txt","w");
    //для определения текущего календарного времени используется функция, которая получить текущую дату, выраженную в секундах
    time_t timer = time(NULL);
    char strDate[40];

    char *format = "%d.%m.%Y";

    for (int i = 0; i < 10; i++) {
        //функция преобразует календарное время, указанное timer, сохраняет его в структуре timer и возвращает указатель на нее
        struct tm *dateTime = localtime(&timer);
        strftime(strDate, 40, format, dateTime);
        fprintf(list, "%s\n", strDate);
        timer += 24 * 60 * 60;
    }

    fclose(list);

    return 0;
}
