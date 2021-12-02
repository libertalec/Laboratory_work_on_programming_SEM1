#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct Point {
    double x, y;
};

struct Point arr[101];
double dist[10201];

double distance(struct Point x, struct Point y) {
    return sqrt((x.x - y.x) * (x.x - y.x) + (x.y - y.y) * (x.y - y.y)); //Корень суммы
    // квадратов разностей иксов и игриков
}

int sum_of_digits(int x) {
    if (!x) return 0; //Если наше число = 0, то просто возратим 0
    return (x % 10) + sum_of_digits(x / 10); //Иначе возвращаем последнюю цифру и вызываем
    // эту функцию для числа без последней цифры
}

int *kolvo(int num, int *l) {
    *l = (int) log10((double) num) + 1;
    int *arr = (int *) malloc(*l * sizeof(int));

    int i;
    for (i = *l - 1; i >= 0; --i) {
        arr[i] = num % 10;
        num /= 10;
    }

    return arr;
}


int main() {
    printf("%s\n", "==== Task 2 ====\n");
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lf%lf", &arr[i].x, &arr[i].y); //Читаем точку
    }
    int it = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            dist[it++] = distance(arr[i], arr[j]); //Высчитываем расстояние
        }
    }
    for (int i = 0; i < n * (n - 1); i++) {
        printf("%lf ", dist[i]);
    }
    printf("\n\n");

    printf("%s\n", "==== Task 3 ====\n");
    int val;
    scanf("%d", &val);
    int len = 0;
    int *arr = kolvo(val, &len);
    int i;
    for (i = 0; i < len; ++i)
        printf("%4d", arr[i]);

    free(arr);
}