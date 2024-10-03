/*
Задание 3. Вывести на экран рисунок из букв
                   *
                  ***
                 *****
                *******
                 HH HH
                 ZZZZZ
*/

#include <stdio.h>

int main(void){
    char* pic[] = {"   *   ",
                   "  ***  ",
                   " ***** ",
                   "*******",
                   " HH HH ",
                   " ZZZZZ ", NULL};
    for(int i = 0; pic[i]; i++){
        printf("%s\n", pic[i]);
    }    
    return 0;
}