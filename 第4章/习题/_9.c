#include<stdio.h>
#include<math.h>

int main(){
    int num, indiv, ten, hundred, thousand, tenThousand, place;
    printf("endter an integer from 0 - 10000: ");
    scanf("%d", &num);
    if(num > 9999){
        place = 5;
    }else if(num > 999){
        place = 4;
    }else if(num > 99){
        place = 3;
    }else if(num > 9){
        place = 2;
    }else {
        place = 1;
    }
    tenThousand = num / 10000;
    thousand = (int)(num - tenThousand * 10000)/1000;
    hundred = (int)(num - tenThousand * 10000 - thousand * 1000)/100;
    ten = (int)(num - tenThousand * 10000 - thousand * 1000 - hundred * 100) / 10;
    indiv = (int)(num - tenThousand * 10000 - thousand * 1000 - hundred * 100 - ten * 10);
    
    printf("The number of digits is: %d\n", place);
    printf("each digit is: ");
    switch (place)
    {
    case 5:
        printf("%d,%d,%d,%d,%d\n", tenThousand, thousand, hundred, ten, indiv);
        printf("The reversed numbers are: %d,%d,%d,%d,%d\n", indiv, ten, hundred, thousand, tenThousand);
        break;
    
    case 4:
        printf("%d,%d,%d,%d\n", thousand, hundred, ten, indiv);
        printf("The reversed numbers are: %d,%d,%d,%d\n", indiv, ten, hundred, thousand);
        break;
    case 3:
        printf("%d,%d,%d\n", hundred, ten, indiv);
        printf("The reversed numbers are: %d,%d,%d\n", indiv, ten, hundred);
        break;
    case 2:
        printf("%d,%d\n", ten, indiv);
        printf("The reversed numbers are: %d,%d\n", indiv, ten);
        break;
    case 1:
        printf("%d\n", indiv);
        printf("The reversed numbers are: %d\n", indiv);
        break;
    default:
        break;
    }
    return 0;
}