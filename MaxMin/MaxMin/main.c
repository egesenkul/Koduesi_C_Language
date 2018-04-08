//
//  main.c
//  MaxMin
//
//  Created by Ege Şenkul on 19.03.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//girilen sayılardan maximum olanını
/*
2
3
10 30 20
5
20 10 30 50 40*/


#include <stdio.h>

int main() {
    int a,b,c,d,e,max=1,min=2000000000;
    scanf("%d",&a);//a counter
    for (b=0; b<a; b++) { //programın çalışması için lazım her çalıştığında c için değer alacak
        scanf("%d",&c);
        for (d=0; d<c; d++) {
            scanf("%d",&e);//girdiğin sayı değerleri için
            if (e>max) {
                max=e;
            }
            if (e<min) {
                min=e;
            }
        }
        printf("%d %d\n",min,max);
        max=0;
    }
}
