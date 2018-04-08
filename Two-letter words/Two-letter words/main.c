//
//  main.c
//  Two-letter words
//
//  Created by Ege Şenkul on 9.04.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//Count the two-letter words of the input string. The strings length is not larger than 1000 characters.

#include <stdio.h>
#include <string.h>

int main() {
    int x,y;
    scanf("%d ",&x);
    for (y=0; y<x; y++) {
        int i,a=0,b=0,c=0;
        char array[1001];
        gets(array);
        for (i=0; i<=strlen(array); i++) {
            if (array[i]<='z'&& array[i]>='a') {
                b++;
            }
            
            if (array[i]!=' ') {
                a++;
            }
            if (array[i]==' ') {
                if (a==2 && b==2) {
                    c++;
                }
                a=0;
                b=0;
            }
            
        }
        if (array[(strlen(array))-3]<=' ' &&  array[(strlen(array))-1]<='z' && array[(strlen(array))-1]>='a' ) {
            c++;
        }
        printf("%d\n",c);

    }
    return 0;
}
