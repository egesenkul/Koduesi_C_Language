//
//  main.c
//  Time moments
//
//  Created by Ege Şenkul on 8.04.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>
int sumofdigits(int a){
    int sum=0,dig;
    while (a!=0) {
        dig=a%10;
        sum=sum+dig;
        a=a/10;
    }
    return sum;
}

int main() {
    int x,y,h,m,s,n,counter=0;
    scanf("%d",&x);
    for (y=0; y<x ; y++) {
        scanf("%d",&n);
        if (n>=1 && n<=40) {
            for (h=0; h<=23; h++) {
                for (m=0; m<=59; m++) {
                    for (s=0; s<=59; s++) {
                        if (sumofdigits(h)+sumofdigits(m)+sumofdigits(s)==n) {
                            counter++;
                        }
                    }
                }
            }
        }
        printf("%d\n",counter);
        counter=0;
    }
        return 0;
}
