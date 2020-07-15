#Программа считает, сколько бутылочек воды вы тратите,в зависимости от времени, что лилась вода
#include <stdio.h>
#include <string.h>
#include <cs50.h>

int liters(int l) {
    return l * 12;
}

int main() {
    printf("Сколько минут вы мылись?\n");
    int min = get_int("");
    printf("Вы использовали %d бутылок\n", liters(min));
}
