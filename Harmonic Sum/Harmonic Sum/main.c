//
//  main.c
//  Harmonic Sum
//
//  Created by Ege Şenkul on 13.04.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>

int main() {
    float t,n,sum=0,i,j;
    int a,b;
    scanf("%d",&b);
    for (a=0; a<b; a++) {
        scanf("%f",&n);
        if (n<=300 && n>= 1) {
            for (i=1; i<=n; i++) {
                t=1/i;
                sum=sum+t;
                for (j=1; j<i; j++) {
                    t=1/j;
                    sum=sum+t;
                }
            }
            printf("%.2f\n",sum);
            sum=0;
        }
    }
        return 0;
}
