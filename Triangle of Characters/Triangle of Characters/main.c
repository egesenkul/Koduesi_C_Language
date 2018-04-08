//
//  main.c
//  Triangle of Characters
//
//  Created by Ege Şenkul on 3.04.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include<stdio.h>

int main()
{
    int n, c, k, space, count = 1,a,b;
    char ch;
    scanf("%d",&a);
    for (b=0; b<a; b++) {
        scanf("%d",&n);
        scanf(" %c",&ch);
        space = n;
        for (c = 1 ; c <= n ; c++){
            for(k = 1 ; k < space ; k++)
                printf(" ");
            for (k = 1 ; k <= c ; k++){
                printf("*");
                if (c > 1 && count < c){
                    printf("%c",ch);
                    count++;
                }
            }
            printf("\n");
            space--;
            count = 1;
        }

    }
        return 0;
}