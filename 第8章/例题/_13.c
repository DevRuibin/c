#include<stdio.h>

int main(){
    int a[3][4] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23};
    int (*p)[4], i, j;
    p = a;
    printf("please enter row and column: ");
    scanf("%d,%d", &i, &j);
    printf("a[%d][%d]=%d\n", i, j, *(*(p+i) + j));
    return 0;
}