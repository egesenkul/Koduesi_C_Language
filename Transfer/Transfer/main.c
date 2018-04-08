//
//  main.c
//  Transfer
//
//  Created by Ege Şenkul on 8.04.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>

int main() {
    int a,b,c,d,x,y;
    scanf("%d",&x);
    for (y=0; y<x; y++) {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if (a<=50 && a>=2 && b<=50 && b>=2 && c<=50 && c>=2 && d<=50 && d>=2) {
            if (a+d<b+c) {
                printf("%d\n",a+d);
            }
            else printf("%d\n",b+c);
        }
    }
       return 0;
}
