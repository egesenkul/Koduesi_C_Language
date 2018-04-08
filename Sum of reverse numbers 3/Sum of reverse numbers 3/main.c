//
//  main.c
//  Sum of reverse numbers 3
//
//  Created by Ege Şenkul on 24.03.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>

int main() {
    int counter,f,i,beg,end,max=0,c,d,e;
    scanf("%d",&f);
    for (counter=0; counter<f; counter++) {
        scanf("%d %d",&beg,&end);
        for (i=beg; i<=end; i++) {
            int b=i%10; //3. basamak
            int c=i/100; //1. basamak
            int d=(i/10)%10; //2. basamak
            if (b*b*b+c*c*c+d*d*d==i) {
                max+=b*100+d*10+c;
            }
        }
        printf("%d\n",max);
        max=0;
        
    }
    
    return 0;
}