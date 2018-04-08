//
//  main.c
//  Binary Conversion
//
//  Created by Ege Şenkul on 19.03.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

/*
 Write a C Program to convert decimal to binary without using array
 */
#include <stdio.h>
int main(){
    long a,b,n,rem, i=1, binary=0;
    scanf("%l",&a);
    for (b=0; b<a; b++) {
        scanf("%d",&n);
            while (n!=0) {
                rem=n%2;
                n/=2;
                binary+=rem*i;
                i*=10;
            }
            printf("%d\n",binary);
            binary=0;
            i=1;
        
        
    }



    return 0;}