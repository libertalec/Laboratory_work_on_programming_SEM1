#include <stdio.h>
#include <math.h>


int main() {
    int a, f;
    scanf("%d", &a);
    scanf("%x", &f);

//Обработка
    char b = ~a;
    char srv;
    char a1;
    char f2;
    a1 = a;
    f2 = f;
    srv = a1 | f2;
    int bit = a<<2;
//Вывод
    printf("%o\n", a);
    printf("%x\n", a);
    printf("%x\n", bit);
    printf("%x", a);
    printf(" ");
    printf("%x",b);
    printf(" ");
    printf("(%d)\n",b);
    printf("%d", srv);


    return 0;
}
