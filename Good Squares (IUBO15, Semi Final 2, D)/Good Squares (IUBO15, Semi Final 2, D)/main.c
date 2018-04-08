//
//  main.c
//  Good Squares (IUBO15, Semi Final 2, D)
//
//  Created by Ege Şenkul on 10.04.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
// K good square if K is a square number and Sk=K

#include <stdio.h>

int main() {
    int x,y;
    scanf("%d",&x);
    for (y=0; y<x; y++) {
        int d,e,f,counter=0;
        scanf("%d %d",&d,&e);
        for (f=d; f<=e; f++) {
            int b,c,sum=0;
            for (c=1; c<=100000; c++) {
                if (sum==f) {
                    break;
                }
                sum=sum+c;
            }
            for (b=1; b<=100000; b++) {
                if (b*b==f) {
                    counter++;
                }
            }
            
        }
        printf("%d\n",counter);

        }
           return 0;
}
