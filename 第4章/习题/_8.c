#include <stdio.h>

int main(){
    float score;
    char grade;
    printf("enter the score of a student: ");
    scanf("%f", &score);
    while (score > 100 || score < 0)
    {
        printf("\ninput error, try again: ");
        scanf("%f", &score);
    }
    switch ((int)(score/10))
    {
    case 10:
    case 9:
        grade='A';
        break;
    case 8:
        grade='B';
        break;
    case 7:
        grade='C';
        break;
    case 6:
        grade='D';
        break;
    default:
        grade='E';
        break;
    }
    printf("the score is %5.1f, the corresponding leverll is %c\n", score, grade);
    return 0;
}
