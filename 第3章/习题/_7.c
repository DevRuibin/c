#include<stdio.h>

int main(){
    float h, r, l, s, sq, vq, vz;
    float pi = 3.141526;
    printf("请输入圆的半径r, 圆柱的高h:");
    scanf("%f, %f", &r, &h);
    l = 2 * pi * r;
    s = r * r * pi;
    sq = 4 *pi * r *r;
    vq = 3.0 / 4.0 * pi * r * r * r;
    vz = pi * r * r * h;
    printf("Circumference is:                   l=%6.2f\n", l);
    printf("Circular area is:                   s=%6.2f\n", s);
    printf("The surface area of the sphere is:  sq=%6.2f\n", sq);
    printf("The volume of the sphere is:        vq=%6.2f\n", vq);
    printf("The volume of the cylinder is:      vz=%6.2f\n", vz);
    return 0;
}