#include <stdio.h>
#include <math.h>


int main() {
    float a = 0, z1 = 3, z2;
    float pi = 3.1415926535;
//Считывание
    scanf("%f", &a);
//Обработка
    z1 = cos(a) + sin(a) + cos(3 * a) + sin(3 * a);
    z2 = (2 * sqrt(2)) * cos(a) * sin((pi / 4) + 2 * a);

//Вывод
    printf("%f %f", z1, z2);
    return 0;
}
ы