//
//  main.c
//  Triangle of numbers 2
//
//  Created by Ege Şenkul on 3.04.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>
int main() {
    int counter,i,satir,n,a,b;
    scanf("%d",&counter);
    for (i=0; i<counter; i++) {
        scanf("%d",&satir);
        
        for (n=1; n<=satir; n++) {
            b=satir;
            for (a=1; a<=n; a++) {
                
                printf("%d ",b);
                b--;
            }
            printf("\n");
        }
    }
    return 0;
}