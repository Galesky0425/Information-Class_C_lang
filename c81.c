#include <stdio.h>
int main(){
    char text;
    text = getchar();
    printf("input: %c\n", text);

    while(getchar() != '\n');

    // fflush(stdin);

    text = getchar();
    printf("input: %c\n", text);

    return 0;
}
