/*

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    unsigned int n = 0;
    unsigned int res = 0;
    scanf("%u", &n);
    do{
        unsigned int cur = 0;
        scanf("%u", &cur);
        res ^= cur; // пользуемся свойством x^x=0
        n--;        //                    и x^0=x
    } while (n);
    printf("%u\n", res);
    return 0;
}
