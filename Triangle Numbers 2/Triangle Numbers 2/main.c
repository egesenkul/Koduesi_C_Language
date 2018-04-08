//
//  main.c
//  Triangle Numbers 2
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
        for (c=0; c<a; c++) {
            for (b=a; b>c; b--) {
                printf("%d ",b);
            }
            printf("\n");
        }
        
    }
        return 0;
}
