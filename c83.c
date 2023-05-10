#include <stdio.h>
int main(){
    char string[30];
    fgets(string, 30, stdin);
    printf("input_1: %s\n", string);
    gets(string);
    printf("input_2: %s\n", string);

    return 0;
}