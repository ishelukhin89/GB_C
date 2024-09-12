#include <stdio.h>

int main(int argc, char const *argv[])
{
    unsigned int n = 0;
    unsigned int res = 0;
    scanf("%u", &n);
    do{
        unsigned int cur = 0;
        scanf("%u", &cur);
        res ^= cur;
        n--;
    } while (n);
    printf("%u\n", res);
    return 0;
}
