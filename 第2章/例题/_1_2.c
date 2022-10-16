// 计算 1 * 3 * 5 * 7 * 9 * 11

#include<stdio.h>

int main(){
    int p = 1;
    int i = 3;
    for(;i<=11;i+=2){
        p = p * i;
    }
    printf("The sum is : %d\n", p);
}