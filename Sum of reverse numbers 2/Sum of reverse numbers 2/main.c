//
//  main.c
//  Sum of reverse numbers 2
//
//  Created by Ege Şenkul on 23.03.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//abc = (ab)2 - c2
//c= abc%10
//ab= a/10

#include <stdio.h>

int main() {
    int counter,f,i,beg,end,max=0,c,d,e;
    scanf("%d",&f);
    for (counter=0; counter<f; counter++) {
        scanf("%d %d",&beg,&end);
        for (i=beg; i<=end; i++) {
            int a=i/10;
            int b=i%10;
            int c=i/100;
            int d=(i/10)%10;
            int e=i%10;
            if (a*a-b*b==i) {
                max+=e*100+d*10+c;
            }
        }
        printf("%d\n",max);
        max=0;
        
    }
    
    return 0;
}
