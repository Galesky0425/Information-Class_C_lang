#include <stdio.h>

int main(){

    int num = 2;
    char grade = 'A';
    double pi = 3.14159265358979323846264338;
    printf("10진수 %d, 8진수 %o, 16진수 %x \n", num, 8, num-1, 10 + 5);
    printf("grade: %c, ASCII값: %d\n", grade, grade);
    printf("문자열: %s\n", "hellow world");
    printf("pi: %lf, 100의 지수 표기법 %e, %E\n", pi, 100.0, 100.0);
    printf("퍼센트 출력 %%, 따옴표 출력\"n");

    return 0;
}