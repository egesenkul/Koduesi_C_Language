//
//  main.c
//  Pythagorean Triples (IUBO15, Semi Final 1, D)
//
//  Created by Ege Şenkul on 6.05.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>

int main() {
    int m,n,i,j,k,counter=0,x,y;
    scanf("%d",&x);
    for (y=0; y<x; y++) {
        scanf("%d %d",&m,&n);
        for (i=m; i<=n; i++) {
            for (j=i+1; j<=n; j++) {
                for (k=j+1; k<=n; k++) {
                    if (i*i+j*j==k*k) {
                        counter++;
                    }
                }
            }
        }
        printf("%d\n",counter);
        counter =0;
    }
    
    return 0;
}