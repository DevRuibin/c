#include<stdio.h>

int main(){
    int isLeapYear(int year);
    for(int i =2000; i<=2500;){
        if(isLeapYear(i)){
            printf("%d is a leap year.\n", i++);
        }else{
            printf("%d is not a leap year.\n", i++);
        }
    }
    
}

int isLeapYear(int year){
    if(year % 400 == 0){
        return 1;
    }
    if(year % 4 == 0 && year % 100 != 0){
        return 1;
    }
    return 0;
}