#include<stdio.h>
#include<string.h>

int main(){
    void insert(char []);
    char str[80];
    printf("input four digits:");
    scanf("%s", str);
    insert(str);
    return 0;
}

void insert(char str[]){
    int i;
    for(i=strlen(str)-1; i>0; i--){
        str[2*i] = str[i];
        str[2 * i - 1] = ' ';
    }
    printf("output:\n%s\n", str);
}