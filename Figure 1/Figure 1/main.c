//
//  main.c
//  Figure 1
//
//  Created by Ege Şenkul on 10.04.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>

int main()
{
    int x,y,a, i, j, k;
    scanf("%d",&x);
    for (y=0; y<x; y++) {
        scanf("%d",&a);
        for(i=1;i<=a;i++)
        {
            for(j=i;j<a;j++)
            {
                printf(" ");
            }
            for(k=1;k<(i*2);k++)
            {
                printf("*");
            }
            printf("\n");
        }
        for(i=a-1;i>=1;i--)
        {
            for(j=a;j>i;j--)
            {
                printf(" ");
            }
            for(k=1;k<(i*2);k++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
        return 0;
}