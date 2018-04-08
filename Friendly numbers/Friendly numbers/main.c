//
//  main.c
//  Friendly numbers
//
//  Created by Ege Şenkul on 27.04.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
// 200 300 -> 1 100 200 -> 0

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
    int a,b;
    scanf("%d",&a);
    for (b=0; b<a; b++) {
        int c,d,e,f,counter=0;
        scanf("%d %d",&c,&d);
        for (e=c; e<=d-1; e++) {
            
            if (sumofdivisors(e)==f && sumofdivisors(f)==e) {
                counter++;
                
            }
            
        }
       printf("%d\n",counter);
    }
    return 0;
}
