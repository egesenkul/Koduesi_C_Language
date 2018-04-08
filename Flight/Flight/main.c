//
//  main.c
//  Flight
//
//  Created by Ege Şenkul on 3.04.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>

int main() {
    int a,b,h,m,t,dakika;
    scanf("%d",&a);
    for (b=0; b<a; b++) {
        scanf("%d",&h);
        scanf("%d",&m);
        scanf("%d",&t);
        dakika=(h*60)+m+t;
        h=dakika/60;
        m=dakika%60;
        printf("%d %d\n",h,m);
    
    }
        return 0;
}
