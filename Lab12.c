#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(int argc, char* argv[]) {
    int a, b;
    FILE* file;
    if (argc != 4) {
        printf("Unresolved number of arguments!");
        return 1;
    }
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    file=fopen(argv[3], "w");
    if(file)
    fprintf(file, "%d", a+b);
    fclose(file);
}