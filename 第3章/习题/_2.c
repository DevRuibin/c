#include<stdio.h>
#include<math.h>

int main(){
    double capital = 1000;
    // 一次性存5年
    double interestFive = 0.03;
    double totalAmountFive = capital * (1 + 5 * interestFive);
    printf("一次性存5年的本息是：%f\n", totalAmountFive);
    // 先存两年，再存三年
    double interestThree = 0.0275;
    double interestTwo = 0.021;
    double totalAmountTwo = capital *(1 + 2 * interestTwo);
    double totalAmountThree = totalAmountTwo * ( 1 +3 * interestThree);
    printf("先存两年，再存三年的本息是: %f\n", totalAmountThree);

    // 先存三年，再存两年
    totalAmountThree = capital *( 1 + 3 *interestThree);
    totalAmountTwo = totalAmountThree *(1 + 2 * interestTwo);
    printf("先存三年，再存两年的本息是: %f\n", totalAmountTwo);

    // 连续存5次一年
    double interestOne = 0.015;
    totalAmountFive = capital * pow((1 + interestOne), 5);
    printf("连续存5年的一年定息是: %f\n", totalAmountFive);

    // 连续5年存活期定息
    double currentInterest = 0.0035;
    totalAmountFive = capital * pow((1 + currentInterest / 4), 4 * 5);
    printf("连续5年存活期定息: %f\n", totalAmountFive);


}

