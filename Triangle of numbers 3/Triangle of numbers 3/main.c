//
//  main.c
//  Triangle of numbers 3
//
//  Created by Ege Şenkul on 26.03.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>
int main() {
    int counter,i,satir,n,a,b;
    scanf("%d",&counter);
    for (i=0; i<counter; i++) {
        scanf("%d",&satir);
        b=1;
        for (n=1; n<=satir; n++) {
            for (a=1; a<=n; a++) {
                printf("%d ",b);
                b++;
            }
            printf("\n");
        }
    }
    
    return 0;
}
