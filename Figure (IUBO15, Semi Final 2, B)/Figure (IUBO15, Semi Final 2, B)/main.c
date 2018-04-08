//
//  main.c
//  Figure (IUBO15, Semi Final 2, B)
//
//  Created by Ege Şenkul on 10.04.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>

int main()
{
    int x,y;
    scanf("%d",&x);
    for(y=0;y<x;y++){
    int i, a, j, k;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a+1-i;j++)
        {
            printf("*");
        }
        for(k=1;k<i;k++)
        {
            printf("  ");
        }
        for(j=1;j<=a+1-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(k=1;k<=a-i;k++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    }
    return 0;
}