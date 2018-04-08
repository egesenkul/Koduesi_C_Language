//
//  main.c
//  Positive Even Counter
//
//  Created by Ege Şenkul on 19.03.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//girilen sayılardan pozitif çift olanların sayısını verecek

#include <stdio.h>

int main() {
    int a,b,c,d,e,counter=0;
    scanf("%d",&a);
    for (b=0; b<a; b++) {
        scanf("%d",&c);
        for (d=0; d<c; d++) {
            scanf("%d",&e);
            if (e>0) {
                if (e%2==0) {
                    counter++;
                }
            }
        }
        printf("%d\n",counter);
        counter=0;
    }
}
