#include<stdio.h>

int main(){
    int a, b, c, temp;
    printf("please enter three integers: ");
    scanf("%d, %d, %d", &a, &b, &c);
    temp = (a > b) ? a : b;
    int max = (temp >c) ? temp : c;
    printf("the largest of the three integers is: %d\n", max);
    return 0;
}
