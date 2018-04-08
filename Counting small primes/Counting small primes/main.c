//
//  main.c
//  Counting small primes
//
//  Created by Ege Şenkul on 25.03.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>

int main ()
{
    int ilk,son,b,c,d,counter=0,counter1,i;
    scanf("%d",&i);
    for (counter1=0; counter1<i; counter1++) {
        scanf  ("%d %d",&ilk, &son);
        for (b = ilk; b <= son; b ++)
        {
            d = 1;
            for (c = 2; c < b; c ++)
            {
                if (b % c == 0)
                {
                    d = 0;
                    break;
                }
            }
            if (d == 1){
                counter++;}
        }
        printf("%d\n",counter);
        counter=0;
    }
    
    return 0;
}