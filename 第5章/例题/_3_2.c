#include<stdio.h>
int main(){
    int i, sum=0;
    printf("please enteri, i=");
    scanf("%d", &i);
    do{
        sum += i;
        i++;
    }while (i<=10);
    printf("sum=%d\n", sum);
    return 0;
    
}