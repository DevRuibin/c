// 计算 1 * 2 * 3 * 4 * 5

#include<stdio.h>

int main(){
    int p = 1;
    int i = 2;
    for(;i<=5;i++){
        p = p * i;
    }
    printf("The sum is : %d\n", p);
}