//
//  main.c
//  Divisors
//
//  Created by Ege Şenkul on 26.03.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main() {
    int a,b;
    scanf("%d",&a);
    for (b=0; b<a; b++) {
        int number;
        scanf("%d",&number);
        int first = number;
        number = sqrt((float)number);
        //printf("%d", number);
        int d,s=1;
        for (d=2; d<=number; d++) {
            if (first%d==0) {
                s=s+d+(first/d);
            }}
        if (number*number == first) {
            s=s-number;
        }
        printf("%d\n",s);

    }
        return 0;
}