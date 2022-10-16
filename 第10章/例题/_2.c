#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *in, *out;
    char ch, infile[10], outfile[10];
    printf("Enter the name of the file to write: ");
    scanf("%s", infile);
    printf("Enter the name of file to read: ");
    scanf("%s", outfile);
    if((in=fopen(infile, "r")) == NULL){
        printf("can not open %s", infile);
        exit(0);
    }
    if((out=fopen(outfile, "w")) == NULL){
        printf("can not open %s", infile);
        exit(0);
    }

    ch = getc(in);
    while(!feof(in)){
        fputc(ch, out);
        putchar(ch);
        ch = fgetc(in);
    }
    putchar(10);
    fclose(out);
    return 0;
}