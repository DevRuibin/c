// gcc _5.c -o _5 -lm
// The math library must be linked in when building the executable. How to do this varies by environment, but in Linux/Unix, just add -lm to the commond.

#include<stdio.h>
#include<math.h>

int main(){
    int num;
    scanf("%d", &num);
    if(num < 3){
        printf("输入的数字应该大于等于3\n");
    }

    double sqrt_num = sqrt((double)num);
    int i = 2;
    int flag = 0;
    while (i<=sqrt_num)
    {
        if(num % i == 0){
            flag = 1;
            break;
        }
        i++;
    }
    if(flag){
        printf("%d 不是素数\n", num);
    }else{
        printf("%d 是素数\n", num);
    }
    
    

}