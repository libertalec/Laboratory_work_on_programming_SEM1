#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

enum MONTHS {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER

};

struct coordinates {
    int x;
    int y;
};

struct rectangle // Прямоугольник
{
    struct coordinates A;
    struct coordinates B;
};

union Printer {
    struct laser_printer {
        unsigned elements : 1; //Отводим по одному биту на состояния в структуре
        unsigned low_toner : 1;
        unsigned broken : 1;
        unsigned no_paper : 1;
    } stats;
    unsigned input; //Объединяем состояния с input
} printer;

int main() {
    printf("%s\n", "===Task 1===");
    enum MONTHS j;
    j = JULY;
    printf("Months: %d\n\n", j);

    printf("%s\n", "===Task 2===");
    struct rectangle Rectangle;
    Rectangle.A.x = 0;
    Rectangle.A.y = 0;

    Rectangle.B.x = 0;
    Rectangle.B.y = 2;


    double AB = sqrt(pow(Rectangle.A.x - Rectangle.B.x, 2) + pow(Rectangle.A.y - Rectangle.B.y, 2));


    double perimeter;
    perimeter = AB * 4;
    printf("%f\n",perimeter);

    printf("%s\n", "===Task 3===");

    scanf("%x", &printer.input);
    printf("Elements: %s\n", printer.stats.elements ? "ON" : "OFF");
    printf("Little toner: %s\n", printer.stats.low_toner ? "ON" : "OFF");
    printf("Broken: %s\n", printer.stats.broken ? "ON" : "OFF");
    printf("No paper: %s\n", printer.stats.no_paper ? "ON" : "OFF");

    return 0;
}
