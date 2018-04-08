//
//  main.c
//  Max sum of divisors
//
//  Created by Ege Şenkul on 3.04.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//girilen aralıkta bölenleri toplamı büyük olan sayıyı veren program

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
    int a,b,c,d,e;
    scanf("%d",&a);
    for (b=0; b<a; b++) {
        int max=0,cevap;
        scanf("%d %d",&c,&d);
        for (e=c; e<=d; e++) {
            if (sumofdivisors(e)>max) {
                max=sumofdivisors(e);
                cevap=e;
            }
        }
        printf("%d\n",cevap);
    }
    return 0;
}
