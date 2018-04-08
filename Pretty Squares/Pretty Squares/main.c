//
//  main.c
//  Pretty Squares
//
//  Created by Ege Şenkul on 4.04.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>

int sumofdigits(int n){
    int sum=0,a;
    while (n!=0) {
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    return sum;
}


int main() {
    int a,b,c,d,e,f,g=0;
    scanf("%d",&a);
    for (b=0; b<a; b++) {
        scanf("%d %d",&c,&d);
        for (e=c; e<=d; e++) {
            f=e*e;
            if (sumofdigits(e)==sumofdigits(f)) {
                g++;
            }
        }
        printf("%d\n",g);
        g=0;
    }
    return 0;
}
