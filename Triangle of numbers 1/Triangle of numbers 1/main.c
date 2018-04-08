//
//  main.c
//  Triangle of numbers 1
//
//  Created by Ege Şenkul on 22.03.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>

int main() {
    int counter,i,a,b,c;
    scanf("%d",&counter);
    for (i=0; i<counter; i++) {
        scanf("%d",&a);
        for (c=1; c<=a; c++) {
            
            for (b=1; b<=c; b++) {
                printf("%d ",c);
            }
            printf("\n");
        }
        
                            }
    return 0;
}
