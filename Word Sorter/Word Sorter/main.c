//
//  main.c
//  Word Sorter
//
//  Created by Ege Şenkul on 13.04.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main() {
    int i,j;
    char array[1001],temp;
    scanf("%s",&array);
    for(i=0; i<strlen(array)-1; i++)
        if(array[i] > array[j]) {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    
    return 0;
}

