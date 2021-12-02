#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int main() {
    printf("%s\n","==== Task 1 ====\n");

    int tariff_price, minutes, cost_per_minute;
    printf("Add tariff price: ");
    scanf("%d", &tariff_price);
    printf("Add number of minutes: ");
    scanf("%d", &minutes);
    printf("Add cost per 1 minute: ");
    scanf("%d", &cost_per_minute);
    int full_price = tariff_price;
    if(minutes > 499)
        full_price += (minutes - 499) * cost_per_minute;
    printf("Full price id: %d\n", full_price);

    printf("%s\n","==== Task 2 ====\n");
    int n;
    scanf("%d",&n);

    switch (n) {
        case 0:{
            printf("zero");
        }
            break;

        case 1:{
            printf("one");
        }
            break;

        case 2:{
            printf("two");
        }
            break;

        case 3:{
            printf("three");
        }
            break;

        case 4:{
            printf("four");
        }
            break;

        case 5:{
            printf("five");
        }
            break;

        case 6:{
            printf("six");
        }
            break;

        case 7:{
            printf("seven");
        }
            break;

        case 8:{
            printf("eight");
        }
            break;

        case 9:{
            printf("nine");
        }
            break;
    }


    return 0;
}