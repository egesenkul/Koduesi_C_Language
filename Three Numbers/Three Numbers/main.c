//
//  main.c
//  Three Numbers
//
//  Created by Ege Şenkul on 20.03.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//
//
//

#include <stdio.h>

int main() {
    int a,b,c,max,min,center;
    while (a!=0 || b!=0 || c!=0) {
        scanf("%d %d %d",&a,&b,&c);
        if (a>b) {
            if (c>a) {
                max=c;
                center=a;
                min=b;
            } else {
                if (c>b) {
                    max=a;
                    center=c;
                    min=b;
                } else {
                    max=a;
                    center=b;
                    min=c;
                }
            }
        } else {
            if (c>b) {
                max=c;
                center=b;
                min=a;
            } else {
                if (c>a) {
                    max=b;
                    center=c;
                    min=a;
                } else {
                    max=b;
                    center=a;
                    min=c;
                }
            }
        }
        if (a!=0 || b!=0 || c!=0) {
            printf("%d %d %d\n",min,center,max);
        }
    }
        return 0;
}
