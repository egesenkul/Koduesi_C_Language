//
//  main.c
//  Inverted triangle of stars
//
//  Created by Ege Şenkul on 26.03.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//
#include<stdio.h>
void main()
{
    int i,j,k,n,a,b;
    scanf("%d",&b);
    for (a=0; a<b; a++) {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
                printf(" ");
            }
            for(k=2*(n-i);k>1 ;k--)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    }
    

/*
#include<stdio.h>
int main()
{
    int rows,i,j,space;
    scanf("%d",&rows);
    for(i=rows;i>=1;--i)
    {
        for(space=0;space<rows-i;++space)
            printf(" ");
        for(j=i;j<=2*i-1;++j)
            printf("*");
        for(j=0;j<i-1;++j)
            printf("*");
        printf("\n");
    }
    return 0;
}
*/