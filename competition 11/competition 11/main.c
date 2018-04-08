#include <stdio.h>

int reverse(int n) {
    int dig, inv = 0;
    while(n > 0) {
        dig = n%10;
        inv = inv*10 + dig;
        n = n/10;
    }
    return inv;
}


int main() {
    int x,y,z,t,e,d;
    scanf("%d",&x);
    for (y=0; y<x; y++) {
        int max=1,min=1000000;
        scanf("%d",&z);
        if (z<=1000 && z>=1) {
            for (t=0; t<z; t++) {
                scanf("%d",&e);
                if (reverse(e)>=max) {
                    max=reverse(e);
                }
                if (reverse(e)<=min) {
                    min=reverse(e);
                }
            }
            d=max-min;
            printf("%d\n",d);
            max=1;
            min=1000000;
        }
        
    }
    
    return 0;
}