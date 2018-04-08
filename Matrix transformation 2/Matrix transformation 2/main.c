//
//  main.c
//  Matrix transformation 2
//
//  Created by Ege Şenkul on 15.04.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>

int main() {
    int a,b,c,d,m,n;
    scanf("%d",&b);
    for (a=0; a<b; a++) {
        scanf("%d %d",&m,&n);
        if (m<=10 && n<=10) {
            int matriks[m][n];
            int trmatriks[n][m];
            for (c = 0; c < m; c++){
                for(d = 0; d < n; d++){
                    scanf("%d",&matriks[c][d]);}}
            
            for (c = 0; c < m; c++){
                for( d = 0 ; d < n ; d++ ){
                    trmatriks[d][c] = matriks[c][d];}}
            
            for (c = 0; c < n; c++) {
                for (d = 0; d < m; d++){
                    printf("%d ",trmatriks[c][d]);}
                printf("\n");}
        }
        }
            return 0;
}
