//
//  main.c
//  Perfect Numbers
//
//  Created by Ege Şenkul on 4.04.2015.
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
    int a,b,c,d,e,counter=0;
    scanf("%d",&a);
    for (b=0; b<a; b++) {
        scanf("%d %d",&c,&d);
        for (e=c; e<=d; e++) {
            if (sumofdivisors(e)==e) {
                counter++;
            }
        }
        printf("%d\n",counter);
        counter=0;
    }
    return 0;
}
