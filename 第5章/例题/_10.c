#include<stdio.h>
#include<math.h>

int main(){
    int n, k, i, m=0;
    for(n=101; n <= 200; n +=2){
        k=sqrt(n);
        for(i=2; i<= k; i++){
            if(n % i == 0){
                break;
            }
        }
        if(i >= k + 1){
            printf("%d\t", n);
            m++;
        }
        if(m % 10 == 0){
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}