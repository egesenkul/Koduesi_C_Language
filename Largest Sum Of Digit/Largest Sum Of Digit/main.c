//
//  main.c
//  Largest Sum Of Digit
//
//  Created by Ege Şenkul on 20.03.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>

int main() {
    int a,b,c,d,e,max=0;
    scanf("%d",&a);
    for (b=0; b<a; b++) {
        scanf("%d",&c);
        for (d=0; d<c; d++) {
            scanf("%d",&e);
            if (sumofdigit(e)>max) {
                max=e;
            }
        }
        printf("%d\n",max);
        max=0;
    }
}

int sumofdigit(int n){
    int t,sum = 0, remainder;
t = n;
while (t != 0)
{
    remainder = t % 10;
    sum       = sum + remainder;
    t         = t / 10;
}
    return sum;
}