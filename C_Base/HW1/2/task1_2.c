/*
Задание 2. Вывести на экран текст "лесенкой"
    Let’s
      go
       to walk
*/

#include <stdio.h>

int main(void){
    printf("\tLet's\n");
    printf("\t%4s\n", "go");
    printf("\t%10s\n", "to walk");
    return 0;
}