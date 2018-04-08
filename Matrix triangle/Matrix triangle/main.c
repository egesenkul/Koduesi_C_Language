//
//  main.c
//  Matrix triangle
//
//  Created by Ege Şenkul on 15.04.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>

int main() {
    int x,y;
    scanf("%d",&y);
    for (x=0; x<y; x++) {
        int a,i,j;
        scanf("%d",&a);
        int array[a][a];
        for (i=0; i<a; i++) {
            for (j=0; j<a; j++) {
                scanf("%d",&array[i][j]);
            }
        }
        for (i=1; i<a; i++) {
            for (j=a-i; j<a; j++) {
                printf("%d ",array[i][j]);
            } printf("\n");
            
        }
    
    }
    return 0;
}
