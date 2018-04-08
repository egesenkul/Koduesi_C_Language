//
//  main.c
//  Mersenne Numbers
//
//  Created by Ege Şenkul on 27.04.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//
/* 
 Mersenne prime is a prime number of the form:
 
 
 M = 2^p - 1
 
 where p is also a prime number.
 
 The first three Mersenne primes are 3 (p = 2),  7 ( p = 3) and 31 (p = 5).
 The largest Merseene prime was discoverd on January 25, 2013 and it has 17,425,170 digits.
 
 Count the Mersenne primes in the range [M, N], (1 ≤  M ≤ N ≤ 1 000 000).
 
 
 */
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
    int test,ax;
    scanf("%d",&test);
    for (ax=0; ax<test; ax++) {
        int a,b,c,d=0,x;
        scanf("%d %d",&a,&b);
        for (c=a; c<=b; c++) {
            x=(powf(2,c))-1;
            if (sumofdivisors(c)==1 && sumofdivisors(x)==1 && x<=b && x>=c)  {
                d++;
            }
        }
        printf("%d\n",d);

    }
        return 0;
}
