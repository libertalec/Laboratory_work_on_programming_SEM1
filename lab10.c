#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct Point
{
    float x;
    float y;
};

float**  getMatrixOfDistances(struct Point* points, int n)
{
    float** pointerToMatrix = (float**)malloc(n * sizeof(int*));
    int lineItr;
    float dist;

    for (int i = 0; i < n; ++i)
    {
        lineItr = 0;
        pointerToMatrix[i] = (float*)malloc((n-1) * sizeof(float*));
        for (int j = 0; j < n; ++j)
        {
            if (i == j) continue;
            dist = sqrt(pow((points[i].x - points[j].x), 2) + pow((points[i].y - points[j].y), 2));
            pointerToMatrix[i][lineItr] = dist;
            lineItr++;
        }
    }
    return pointerToMatrix;
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
    struct Point* points = (struct Points*)malloc(n * sizeof(struct Points*));


    for (int i = 0; i < n; ++i) {
        printf("Enter %d point coordinates:", (i + 1));
        scanf("%f %f", &points[i].x, &points[i].y);
    }

    float **matrix = getMatrixOfDistances(points, n);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n - 1; ++j)
        {
            printf("%5.2f", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n \n");


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