#include <stdio.h>

int main(int argc, char const *argv[])
{
    u_int32_t n = 0;
    u_int32_t res = 0;
    scanf("%u", &n);
    res = (~(n>>24)<<24)|((n<<8)>>8);
    printf("%u\n", res);
    return 0;
}
