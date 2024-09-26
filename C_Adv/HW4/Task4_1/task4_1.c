#include <stdio.h>

int cnk(int n, int k){
    int C[n+1][n+1];
    for (int i=0; i<=n; ++i){
        C[i][0] = C[i][i] = 1;
        for (int j=1; j<i; ++j)
            C[i][j] = C[i-1][j-1] + C[i-1][j];
    }
    return C[n][k];
}

int main(int argc, char const *argv[]){
    int n, k;
    scanf("%d%d", &n, &k);
    printf("%d\n", cnk(n, k));
    return 0;
}
