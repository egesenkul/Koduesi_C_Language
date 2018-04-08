//
//  main.c
//  Digit difference
//
//  Created by Ege Şenkul on 15.04.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>

int reverse(int n){
    int rev=0;
    while (n!=0) {
        rev=rev*10;
        rev=rev+n%10;
        n=n/10;
    }
    return rev;
}


int main() {
    int x,y,number1,number2,max,min,counter1=0,counter2=0,i,n1,n2,a=0;
    scanf("%d",&x);
    for (y=0; y<x; y++) {
        scanf("%d %d",&number1,&number2);
        max=number1;
        min=number2;
        if (number2>max) {
            max=number2;
            min=number1;
        }
        n1=min;
        n2=max;
        n1=reverse(n1);
        n2=reverse(n2);
        while (max!=0) {
            max=max/10;
            counter1++;
        }
        while (min!=0) {
            min=min/10;
            counter2++;
        }
        if (counter1-counter2!=0) {
            for (i=0; i<counter1-counter2; i++) {
                n1=n1*10;
            }
        }
        
        while (n2!=0) {
            if (n2%10!=n1%10) {
                a++;
            }
            n2=n2/10;
            n1=n1/10;
            
        }
        printf("%d\n",a);
        counter1=0;
        counter2=0;
        a=0;
    }
        return 0;
}
