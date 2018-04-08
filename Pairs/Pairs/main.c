//
//  main.c
//  Pairs
//
//  Created by Ege Şenkul on 8.04.2015.
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
    int x,y,beg1,end1,beg3,end3,a,b;
    scanf("%d",&x);
    for (y=0; y<x ; x++) {
        scanf("%d %d %d %d",&beg1,&end1,&beg3,&end3);
        int c=0;
       if (beg1<=9 && beg1>=1 && end1<=9 && end1>=1 && beg3<=999 && beg3>=100 && end3<=999 && end3>=100) {
            for (a=beg1; a<=end1; a++) {
                for (b=beg3; b<=end3; b++) {
                    if (a+b==reverse(a*b)) {
                        printf("%d %d\n",a,b);
                        c++;
                    }
                    
                    
                }

        }
        if (c==0) {
            printf("%d\n",0);
        }
       }}
        
    
    return 0;
}
