//
//  main.c
//  Pretty Numbers
//
//  Created by Ege Şenkul on 23.02.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

/* girilen bir sayının rakamları toplamı eğer son rakama bölünüyorsa po bölünmüyorsa jo */

#include <stdio.h>

int main()
{
    int counter;
    scanf("%d",&counter);
    for (int i=0; i<counter; i++)
    {
        int n, t,sum = 0, remainder;
        scanf("%d", &n);
        t = n;
        while (t != 0)
        {
            remainder = t % 10;
            sum       = sum + remainder;
            t         = t / 10;
        }
        int lastdigit;
        lastdigit = n %10;
        int check;
        check = sum % lastdigit;
        if (check == 0)
        {
            printf("po\n");
        }
        if (check != 0)
        {
            printf("jo\n");
    
    }
        
        sum=0;
    }
    
    
    return 0;
}