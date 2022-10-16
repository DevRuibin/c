#include<stdio.h>
#include<math.h>
#define M 1000

int main(){
    int i, k;
    printf("enter an integer less than %d\n", M);
    scanf("%d", &i);
    if(i>M){
        printf("The enterd data does not meet the requirements, please re-enter an integer less then %d\n", M);
    }
    k = sqrt(i);
    printf("The interger part of the square root of %d is %d\n", i, k);
    return 0;
}