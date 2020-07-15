#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(void) {
    int change = 0;
    int count = 0;
    do {
        change = (int)get_float("Сколько нужно сдачи: ");
    } while (change < 0);
    while(change != 0){
        if(change >= 25){
            change = change - 25;
        } else if (change >= 10) {
            change = change - 10;
        } else if (change >= 5) {
            change = change - 5;
        } else {
            change = change - 1;
        }
        count++;
    };
    printf("Минимальное кол-во монет на сдачу - %d\n", count);
}
