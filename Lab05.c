#include<stdio.h>
int main(void)
{
    //Task1
    int a[7] = { 123, 123, 123, 123, 456, 321, 1 };
    for (int i = 0;i < 7;i++)
        printf("%d ", a[i]);
    printf("\n");
    //Task2
    int b[2][2] = { 1, 2, 3, 4 }, c[2][2] = { 1, 0 , 0 ,1 }, res[2][2] = { 0 };
    for (int i = 0;i < 2;i++) { //циклы для перемножения матриц
        for (int j = 0;j < 2;j++) {
            for (int k = 0;k < 2;k++) {
                res[i][j] += b[i][k] * c[k][j];
            }
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
}
