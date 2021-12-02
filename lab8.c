#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int main() {
    int k = 50;
    printf("%s\n", "==== Task 2 ====");
    char *str1 = (char *) malloc(sizeof(char) * k);
    char *str2 = (char *) malloc(sizeof(char) * k);
    scanf("%s", str1);
    scanf("%s", str2);
    int x;
    scanf("%d", &x);
    char *temp = (char *) malloc(sizeof(char) * x);
    strncpy(temp, str2, x); //temp – первые x символов со второй строки
    strcat(str1, temp); //Объединяем первую строку и первые x символов второй строки
    printf("%s\n", str1);


    printf("%s\n", "==== Task 4 ====");
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        if(str1[i]==str2[i]){
            printf("The letter with the number i matched\n");
        }else {
            printf("The lines don't match\n");
            break;
        }
    }

    printf("%s\n", "==== Task 6 ====");
    int d;
    scanf("%d", &d);
    char *temp1 = (char *) malloc(sizeof(char) * d);
    strncpy(temp1, str2, d);
    str1=temp1;
    printf("%s\n", str1);

    printf("%s\n", "==== Task 8 ====");
    char val;
    scanf("%s", &val);
    char *ach;

    ach = strchr(str1, val);

    // Выводим результат на консоль
    if (ach == NULL) {
        printf("The desired symbol was not found\n");
    } else {
        printf("%d\n", ach - str1 + 1);
    }

    printf("%s\n", "==== Task 10 ====");
    char *p;
    for (p = str1; *p; ++p) {
        if (strchr(str2, *p)) {
            printf("found %c\n", *p);
        }
    }


    return 0;
}