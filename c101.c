#include <stdio.h>
int main(){
    int input_sec, hr, min, sec;
    printf("sec: "), scanf("%d", &input_sec);
    hr = input_sec / 3600;
    min = input_sec % 3600 / 60;
    sec = input_sec % 60;
    printf("hr: %2d, min: %2d, sec: %2d", hr, min, sec);

    return 0;
}