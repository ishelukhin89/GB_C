#include <stdio.h>
#include <string.h>

#define SIZE 1000

u_int64_t min(u_int64_t a, u_int64_t b){
    return a+((a-b)&((a-b)>>63));
}

void zFunction2 (char *s, int z[]) {
    int n = strlen(s);
    for (int i=1, l=0, r=0; i<n; ++i) {
        if (i <= r)
            z[i] = min(r-i+1, z[i-l]);
        while (i+z[i] < n && s[z[i]] == s[i+z[i]])
            ++z[i];
        if (i+z[i]-1 > r)
            l = i, r = i+z[i]-1;
    }
}

int max(int z[], int n){
    int max = 0;
    for (size_t i = 0; i < n; i++)
        if(z[i]>max) max=z[i];
    return max;
}

int main(int argc, char const *argv[])
{
    char t[SIZE] = {0}, p[SIZE] = {0};
    char s[SIZE+SIZE] = {0};
    int z[SIZE+SIZE] = {0};
    printf("Input text1: ");
    scanf("%s",t);
    printf("Input text2: ");
    scanf("%s",p);
    size_t tlen = strlen(t);
    size_t plen = strlen(p);

    sprintf(s,"%s#%s",p,t);
    zFunction2(s,z);

    printf("%d\n", max(z+plen, tlen));
    return 0;
}
