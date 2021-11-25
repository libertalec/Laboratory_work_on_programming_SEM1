#include <stdio.h>
#include <math.h>

#define MIN_VALUE 1
#define MAX_VALUE 100

int main() {
    int a = 0;
    scanf("%d", &a);
    int result = MIN_VALUE <= a && a <= MAX_VALUE;

    printf("%s  \n", result ? "yes" : "no");

//Секонд часть
    int b;
    printf("Vvedite chislo ");
    scanf("%d", &b);
    if (b & (1 << 2)) {
        printf("vtoroi bit bil raven 1");
    } else {
        printf("vtoroi bit bil raven 0");
    }



    return 0;
}
