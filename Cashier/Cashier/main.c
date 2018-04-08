//
//  main.c
//  Cashier
//
//  Created by Ege Şenkul on 20.03.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//


#include <stdio.h>

int main() {
    int a,b,c,d,e,max=1,maxcounter=0;
    scanf("%d",&a);
    for (b=0; b<a; b++) {
        scanf("%d",&c);
        for (d=0; d<c; d++) {
            scanf("%d",&e);
            if (e>max) {
                max=e;
                maxcounter++;
            }
        }
        printf("%d\n",maxcounter);
        max=0,maxcounter=0;
    }
}
