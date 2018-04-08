//
//  main.c
//  Prime factors
//
//  Created by Ege Şenkul on 25.03.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>

int main() {
    int a,i,test,counter;
    scanf("%d",&test);
    for (counter=0; counter<test; counter++) {
        scanf("%d",&a);
        for (i=2; i<=a; i++) {
            if (a%i==0) {
                a= a/i;
                printf("%d ",i);
                i--;
            }
        }
        printf("\n");
    }
    
    return 0;
}
