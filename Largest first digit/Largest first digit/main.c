//
//  main.c
//  Largest first digit
//
//  Created by Ege Şenkul on 2.04.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
// Determine the number with the largest first digit of N (1 ≤ N ≤ 20) numbers. Each number is in the range [1, 2 000 000 000].
#include <stdio.h>

int firstdig(int n){
    while (n>=10) {
        n=n/10;
    }
    return n;
}

int main() {
    int a,b,c,d,e,f,max=0;
    scanf("%d",&a);
    for (b=0; b<a; b++) {
        scanf("%d",&c);
        for (d=0; d<c; d++) {
            scanf("%d",&e);
            if (firstdig(e)>max) {
                max=firstdig(e);
                f=e;
            }
        }
        printf("%d\n",f);
        max=0;
    }
    return 0;
}






























