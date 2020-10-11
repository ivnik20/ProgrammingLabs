#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
 char s1[80],s2[80],temp[80];
 int n;

   //Task2
    gets_s(s1, 80);
    gets_s(s2, 80);
    scanf_s("%d", &n);
    strncat_s(s1, 80, s2, n);//сложение первой строки и n символов второй
    printf("%s\n", s1);

   //Task4
    gets_s(temp, 80);
    gets_s(s1, 80);
    gets_s(s2, 80);
    scanf_s("%d", &n);
    printf("%d\n", strncmp(s1, s2, n));//сравнение первых n символов строк

   //Task9
    gets_s(temp, 80);
    gets_s(s1, 80);
    int a;
    a = _getche();
    printf("\n%d\n", strrchr(s1, a) - s1 + 1);//последнее вхождение символа
 
   //Task11
    gets_s(s1, 80);
    gets_s(s2, 80);
    printf("%d\n", strspn(s1, s2));//длина отрезка одной строки, содержащего символы из множества символов, входящих во вторую строку.

   //Task13
    gets_s(temp, 80);
    gets(s1);
    gets(s2);
    char* token;
    token = strtok(s1, s2);//первая лексема, разделенная разделителями из второй строки
    while (token!= NULL) {
        printf("%s\n", token);
        token = strtok(NULL, s2);//последовательный вызов функции несколько раз для одной строки
    }

}