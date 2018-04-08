//
//  main.c
//  Prime's product
//
//  Created by Ege Şenkul on 28.04.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

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
    int x,y;
    scanf("%d",&x);
    for (y=0; y<x; y++) {
        int n,a,b,counter=0;
        scanf("%d",&n);
        for (a=1; a<=n-1; a=a+2) { //+2 yap
            for (b=a; b<=n; b=b+2) {
                if (sumofdivisors(a)==1) {
                    if (sumofdivisors(b)==1) {
                        if (a*b<=n) {
                            counter++;
                        }
                    }
                }
            }
        }
        printf("%d\n",counter);
    }
            return 0;
}
