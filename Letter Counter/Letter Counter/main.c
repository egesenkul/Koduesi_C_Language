//
//  main.c
//  Letter Counter
//
//  Created by Ege Şenkul on 9.04.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include<stdio.h>
#include<string.h>
int main()
{
    int a,test,counter;
    char ch[501];
    int i;
    scanf("%d ",&a);
    
    for (test=0; test<a; test++)
    {
        gets(ch);
        counter=0;
        for (i=2; i<strlen(ch); i++)
        {
            if (ch[i]==ch[0])
            {
                counter++;
            }
        }        printf("%d\n", counter);
    }
    return 0;
}