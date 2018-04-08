//
//  main.c
//  digit frequency
//
//  Created by Ege Şenkul on 15.05.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <string.h>
#include <stdio.h>
int main()
{
    char string[100],max2,fe;
    int c = 0, count[26] = {0};
    int max;
    
    gets(string);
    fe='a';
    while (string[c] != '\0')
    {
        
        
        if (string[c] >= 'a' && string[c] <= 'z'){
            count[string[c]-'a']++;}
        
        c++;
    }
    
    max=count[0];
    max2='a';
    for (c = 1; c < 26; c++)
    {
        fe++;
        
        if (count[c] >max)
            max=count[c];
        max2=fe;
        
    }
    printf("%c %d\n",fe,max);
    return 0;}