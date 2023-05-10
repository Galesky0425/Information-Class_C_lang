#include <stdio.h>
int main(){
    int dodo, gogo;
    int total, deposit, change, menu;
    int w500, w100, w50, w10;
    int cnt_dodo, cnt_gogo;

    while(1){
        printf("dodo is 70 won, gogo is 30 won. \n");
        scanf("%d %d", &cnt_dodo, &cnt_gogo);
        dodo = 70 * cnt_dodo;
        gogo = 30 * cnt_gogo;
        total = dodo + gogo;
        printf("total: %d \n", total);
        printf("input: ");
        scanf("%d", &deposit);

        if (deposit > total) {
            change = deposit - total;
            w500 = change / 500;
            w100 = change % 500 / 100;
            w50 = change % 500 % 100 / 50;
            w10 = change % 500 % 100 % 50 / 10;

            printf("total dodo: %d \n", dodo);
            printf("total gogo: %d \n", gogo);
            printf("change: ", change);
            printf("#### total change ####\n");
            printf("500 won: %d \n", w500);
            printf("100 won: %d \n", w100);
            printf("50 won: %d \n", w50);
            printf("10 won: %d \n", w10);
            printf("########################\n\n");

            printf("continue? press 1 to restart, 0 to break: "), scanf("%d", &menu);
            if (menu == 0) {
                break;
            }
            else continue;
        }

        else {
            printf("Not enough money. press 1 to restart, 0 to break: "), scanf("%d", &menu);
            if (menu == 0) {
                break;
            }
            else continue;
        }
    }

    return 0;
}