//
//  main.c
//  Three dices
//
//  Created by Ege Şenkul on 26.03.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//3 zar at inputun zarlardaki sayıların toplamı kaç farklı şekilde olur

#include <stdio.h>

int main() {
    int x,y;
    scanf("%d",&x);
    for (y=0; y<x; y++) {
        int a,b,c,n,counter=0;
        scanf("%d",&n);
        if (n<=18 && n>=3) {
            for (a=1; a<=6; a++) {
                for (b=1; b<=a; b++) {
                    for (c=1; c<=b; c++) {
                        if (a+b+c==n) {
                            counter++;
                        }
                    }
                }
            }
            printf("%d\n",counter);
        }
    }
    return 0;
}
