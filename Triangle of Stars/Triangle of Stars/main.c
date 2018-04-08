//
//  main.c
//  Triangle of Stars
//
//  Created by Ege Şenkul on 26.03.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>
int main()
{
    int i, n, a,b,c,d;
    scanf("%d",&b);
    for (a=0; a<b; a++) {
        scanf("%d",&n);
        for (i = 0; i < n; i++)
        {
            for (c = 0; c <= (n - i - 2); c++)
                printf(" ");
            for (c = 0 ; c <= i; c++)
                printf("*");
            for (d = 2 ; d <= c; d++)
                printf("*");
            printf("\n");
        }
    }
        return 0;
}