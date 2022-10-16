#include<stdio.h>
#include<math.h>

int main(){
    int h = 10;
    float x1=2, y1=2, x2=-2, y2=2, x3=-2, y3=-2, x4=2, y4=-2;
    float x, y, d1, d2, d3, d4;
    printf("enter a point(x, y): ");
    scanf("%f, %f", &x, &y);
    d1 = pow((x-x1), 2) + pow((y - y1), 2);
    d2 = pow((x-x2), 2) + pow((y - y2), 2);
    d3 = pow((x-x3), 2) + pow((y - y3), 2);
    d4 = pow((x-x4), 2) + pow((y - y4), 2);
    if(d1 > 1 && d2 > 1 && d3 > 1 && d4 > 1){
        h = 0;
    }
    printf("The height of this point is: %d\n", h);
    return 0;
}