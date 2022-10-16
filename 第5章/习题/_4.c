# include<stdio.h>

int main(){
    char c;
    int letters=0, space=0, digit=0, other=0;
    printf("enter a line characters:\n");
    while ((c=getchar()) != '\n')   
    {
        if(c>='a' && c<='z' || c>='A' && c <='Z'){
            letters++;
        }else if (c==' ')
        {
            space++;
        }else if (c>='0' && c<='9')
        {
            digit++;
        }else{
            other++;
        }
    }
    printf("the number of letters is: %d\n", letters);
    printf("the number of spaces is: %d\n", space);
    printf("the number of digits is: %d\n", digit);
    printf("the number of other characters is: %d\n", other);
    return 0;
}