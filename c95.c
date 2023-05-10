#include <stdio.h>
int main(){
    int kor, eng, math;
    printf("kor: "), scanf("%d", &kor);
    printf("eng: "), scanf("%d", &eng);
    printf("math: "), scanf("%d", &math);
    kor >= 70 && eng >= 70 || math >= 80? printf("good"): printf("ok");

    return 0;
}