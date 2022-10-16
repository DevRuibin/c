#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;
    char ch, filename[10];
    printf("please input the file name: ");
    scanf("%s", filename);
    getchar();
    if((fp=fopen(filename, "w")) == NULL){
        printf("can not open file\n");
        exit(0);
    }
    printf("please enter a string to be stored to disk, ending with #\n");
    ch = getchar();
    while(ch != '#'){
        fputc(ch, fp);
        putchar(ch);
        ch = getchar();
    }
    getchar();
    fclose(fp);
    putchar(10);
    return 0;
}