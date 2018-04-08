//
//  main.c
//  Father
//
//  Created by Ege Şenkul on 26.03.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//ab+a+b=N
//b=n-a/ab
//ab+a+n(-a/ab)=n

#include <stdio.h>

int main() {
    int a,b,c,d,n;
    scanf("%d",&c);
    for (d=0; d<c; d++) {
        scanf("%d",&n);
        if (n>=2 && n<=30) {
            for (a=1; a<n-1; a++) {
                for (b=a+1; b<n; b++) {
                    if ((a*b)+(a+b)==n) {
                        printf("%d %d\n",a,b);
                    }
                }
            }

        }
            }
        return 0;
}
