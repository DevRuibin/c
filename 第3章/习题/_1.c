#include<stdio.h>
#include<math.h>

int main(){
    float r = 0.07;
    int n = 10;
    float p = pow((1 + r), n);
    printf("%f\n", p);

}