#include<stdio.h>

int main(){
    float sign = -1;
    float sum = 1;
    float deno = 2;
    while (deno<=100){
        sum += (sign * (1 / deno));
        deno++;
        sign = sign * (-1);
    }
    printf("sum: %f\n", sum);
    
}