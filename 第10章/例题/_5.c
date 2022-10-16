#include<stdio.h>

int main(){
    FILE *fp1, *fp2;
    fp1 = fopen("_1.txt", "rb");
    fp2 = fopen("_1.txt.bak", "wb");
    char ch = getc(fp1);
    while(!feof(fp1)){
        putchar(ch);
        ch = getc(fp1);
    }
    putchar(10);
    rewind(fp1);
    while(!feof(fp1)){
        fputc(ch, fp2);
        ch = fgetc(fp1);
    }
    fclose(fp1);fclose(fp2);
    return 0;
}