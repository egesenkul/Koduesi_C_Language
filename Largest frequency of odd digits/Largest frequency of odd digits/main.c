//
//  main.c
//  Largest frequency of odd digits
//
//  Created by Ege Şenkul on 15.04.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>

int main() {
    int a,b,c,d,e,counter,max,result,n;
    scanf("%d",&a);
    for (b=0; b<a; b++) {
        scanf("%d",&c);
        max=0;
        for (d=0; d<c; d++) {
            scanf("%d",&e);
            n=e;
            counter=0;
            while (e!=0) {
                if (e%2!=0 ) {
                    counter++;
                }
                e=e/10;
            }
            if (counter>max) {
                max=counter;
                result=n;
            }
        }
        printf("%d\n",result);
    }
    return 0;
}
