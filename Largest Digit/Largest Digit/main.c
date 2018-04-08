//
//  main.c
//  Largest Digit
//
//  Created by Ege Şenkul on 26.03.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>

int main() {
    int max=1,n,a,i,counter;
    scanf("%d",&counter);
    for (i=0; i<counter; i++) {
        scanf("%d",&n);
        while (n!=0) {
            a=n%10;
            n=n/10;
            if (a>max) {
                max=a;
            }
        }
        printf("%d\n",max);
        max=1;
    }
    return 0;
}
