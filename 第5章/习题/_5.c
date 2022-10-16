#include<stdio.h>

int main(){
    int a, n, i=1, sn=0, tn=0;
    printf("a, n=:");
    scanf("%d, %d", &a, &n);
    while (i<=n)
    {
        tn += a;
        sn += tn;
        a *= 10;
        ++i;
    }
    printf("a + a + aaa + ...=%d\n", sn);
    return 0;
    
}