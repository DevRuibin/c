#include<stdio.h>

int main(){
    double sn=100, hn=sn/2;
    int n;
    for(n=2; n<=10;n++){
        sn = sn + 2 *hn;
        hn /= 2;
    }
    printf("A total of %f meters have passed when the tenth landing.\n", sn);
    printf("Tenth rebound %f meters.\n", hn);
    return 0;
}