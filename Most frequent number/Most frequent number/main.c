//
//  main.c
//  Most frequent number
//
//  Created by Ege Şenkul on 25.03.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include<stdio.h>
int main(){
    int a,b,c,d,e,f,g,h;
    scanf("%d",&a);
    for (b=0; b<a; b++) {
        int counter[102]={0};
        scanf("%d",&c);
        if (c>=1 &&c<=20) {
            for (d=0; d<c; d++) {
                scanf("%d",&e);
                counter[e]++;
            }
            h=0;
            f=counter[0];
            for (g=1; g<101; g++) {
                if (counter[g]>f) {
                    f=counter[g];
                    h=g;
                }
            }
            
            printf("%d\n",h);

        }
            }

    return 0;}