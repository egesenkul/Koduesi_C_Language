//
//  main.c
//  Triangle Numbers
//
//  Created by Ege Şenkul on 19.03.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>

int main() {
    int z,counter;
    scanf("%d",&z);
    for (counter=0; counter<z; counter++) {
        int a,b,c,d,e,f,g,h,j,i;
        scanf("%d",&a);
        b = a-1;
        c = a-2;
        d= a-3;
        e= a-4;
        f= a-5;
        g= a-6;
        h= a-7;
        j= a-8;
        i= a-9;
        printf("%d\n",a);
        printf("%d ",a);
        if (b>0) {
            printf("%d\n", b);
        }
        if (c>0) {
            printf("%d %d %d\n",a,b,c);
        }
        if (d>0) {
            printf("%d %d %d %d\n",a,b,c,d);
        }
        if (e>0) {
            printf("%d %d %d %d %d\n",a,b,c,d,e);
        }
        if (f>0) {
            printf("%d %d %d %d %d %d\n",a,b,c,d,e,f);
        }
        if (g>0) {
            printf("%d %d %d %d %d %d %d\n",a,b,c,d,e,f,g);
        }if (h>0) {
            printf("%d %d %d %d %d %d %d %d\n",a,b,c,d,e,f,g,h);
        }
        if (j>0) {
            printf("%d %d %d %d %d %d %d %d %d\n",a,b,c,d,e,f,g,h,j);
        }
        if (i>0) {
            printf("%d %d %d %d %d %d %d %d %d %d\n",a,b,c,d,e,f,g,h,j,i);
        }

    }
        return 0;
}
