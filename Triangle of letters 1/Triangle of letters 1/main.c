//
//  main.c
//  Triangle of letters 1
//
//  Created by Ege Şenkul on 3.04.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>

int main() {
    char a,b,c;
    int d,e;
    scanf("%d",&d);
    for (e=0; e<d; e++) {
        scanf(" %c",&a);
        for (c='A'; c<=a; c++) {
            for (b='A'; b<=c; b++) {
                printf("%c ",c);
            }
            printf("\n");
        }
    }
    return 0;
}