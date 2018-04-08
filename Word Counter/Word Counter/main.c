//
//  main.c
//  Word Counter
//
//  Created by Ege Şenkul on 7.04.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main()
{
    int i,a,b;
    char array[1001];
    scanf("%d ",&a);
    for (b=0; b<a; b++) {
        int counter=1;
        gets(array);
        for (i=0; i<strlen(array); i++) {
            if (array[i]==' ' && (array[i+1]>='a' && array[i+1]<='z')) {
                counter++;
            }}
        if (array[0]==' ') {
            counter--;
        }
        printf("%d\n",counter);
    }
    return 0;
}