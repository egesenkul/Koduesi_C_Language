//
//  main.c
//  Sequence conversion
//
//  Created by Ege Şenkul on 3.04.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//
/* Convert the input sequence of  N (1 ≤ N ≤ 20) input numbers so that the subsequences of the same numbers are replaced with the first numbers of the subsequences. Each input number is in the range [1, 2 000 000 000].
 
 For example, the input sequence 1 2 2 3 1 1 1 4 4 is converted into 1 2 3 1 4.
 */
#include<stdio.h>
int main() {
    int x,y;
    scanf("%d",&x);
    for (y=0; y<x; y++) {
        int array[21];
        int a,b,c,d,e,f=0;
        scanf("%d",&a);
        for (b=0; b<a; b++) {
            scanf("%d",&array[b]);
        }
        int array2[21];
        d=0;
        for (c=0; c<a; c++) {
            if (array[c]!=array[c+1]) {
                array2[d]=array[c];
                d++;
                f++;
                
                
            }
        }
        for (e=0; e<f; e++) {
            printf("%d ",array2[e]);
        }
        printf("\n");
    }
    
    return 0;
}