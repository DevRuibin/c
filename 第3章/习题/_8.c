#include<stdio.h>

int main(){
    char c1, c2;
    printf("input two chars c1, c2: ");
    c1 = getchar();
    c2 = getchar();
    printf("The output from the putchar statement is:");
    putchar(c1);
    putchar(c2);
    printf("\n");
    printf("The output from the printf statement is:");
    printf("%c%c\n", c1, c2);
    return 0;
}