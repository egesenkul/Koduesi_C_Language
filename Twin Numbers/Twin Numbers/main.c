//
//  main.c
//  Twin Numbers
//
//  Created by Ege Şenkul on 5.04.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//2 sayı asalsa ve aradaki fark 2 mi

#include <stdio.h>
#include <math.h>

int sumofdivisors(int number) {
    int first = number;
    number = sqrt((float)number);
    int d,s=1;
    for (d=2; d<=number; d++) {
        if (first%d==0) {
            s=s+d+(first/d);
        }}
    if (number*number == first) {
        s=s-number;
    }
    return s;
}

int main() {
    int a,b,c,d,i;
    scanf("%d",&a);
    for (b=0; b<a; b++) {
        scanf("%d %d",&c ,&d);
        int count=0;
        for (i=c; i<=d; i++) {
            if (sumofdivisors(i)==1 && sumofdivisors(i+2)==1) {
                    count++;
            }
            }
        printf("%d\n",count);
        count=0;}
    return 0;
}
