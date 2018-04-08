//
//  main.c
//  MinMax Sum
//
//  Created by Ege Şenkul on 25.02.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>

int main() {
    int a,b,c,d,e,max=-1000000,min=1000000;
    scanf("%d",&a);
    for (b=0; b<a; b++) {
        scanf("%d",&c);
        for (d=0; d<c; d++) {
            scanf("%d",&e);
            if (e>max) {
                max=e;
            }
            if (e<min) {
                min=e;
            }
        }
        printf("%d\n",max+min);
        max=0,min=0;
    }
}
