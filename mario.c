#Программа строит простую пирамидку заполнителем "#"
#Высота пирамидки зависит от введенного пользователем числа
#include <cs50.h>
#include <stdio.h>

int main (void) {
    int a = 0;
    do  {
    a = get_int("введите число: ");
    } while (a < 1 || a > 23);
    int k = a;
    while(a  > 0){
    for (int d = 0; d<a-1; d++){
        printf(" ");}
    for (int c = 0; c <k-a+2; c++){
        printf("#");}
    a--;
    printf("\n");}
}
