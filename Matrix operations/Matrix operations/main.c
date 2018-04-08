//
//  main.c
//  Matrix operations
//
//  Created by Ege Şenkul on 15.04.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>

void main() {
    int m1, n1, i, j, k;
    printf("m1 n1? "); scanf("%d %d", &m1, &n1); int A[m1][n1];
    // Read A
    int m2, n2;
    printf("m1 n2? "); scanf("%d %d", &m2, &n2); int B[m2][n2];
    // Read B
    if(n1 != m2) { printf("Error"); return -1; }
    int C[m1][n2];
    for(i = 0;  i < m1;  i++)
        for(j=0; j<n2; j++){
            C[i][j] = 0;
            for(k = 0; k < n1; k++) C[i][j] += A[i][k]*B[k][j];
        }