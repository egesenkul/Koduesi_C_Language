//
//  main.c
//  Sum of reverse numbers 1
//
//  Created by Ege Şenkul on 21.03.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//  eğer bu kuralı sağlıyorsa abc = a + b2 + c3 terslerinin toplamı
/* 
 printf("3. basamak: %d\n",(a%10));
 printf("2. basamak: %d\n",((a/10)%10));
 printf("1. basamak: %d",(a/100));
 */

#include <stdio.h>

int main() {
    int counter,f,i,beg,end,max=0;
    scanf("%d",&f);
    for (counter=0; counter<f; counter++) {
        scanf("%d %d",&beg,&end);
        for (i=beg; i<=end; i++) {
            int a=i/100;
            int b=(i/10)%10;
            int c=i%10;
            if (a+b*b+c*c*c==i) {
                max+=c*100+b*10+a;
            }
        }
        printf("%d\n",max);
        max=0;

    }
    
    return 0;
}
