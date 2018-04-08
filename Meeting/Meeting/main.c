//
//  main.c
//  Meeting
//
//  Created by Ege Şenkul on 10.04.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>

int main() {
    int h,m,h2,m2,h3,m3,dk,dk2,dk3,max,min,center,a,b;
    scanf("%d",&a);
    for (b=0; b<a; b++) {
        scanf("%d %d",&h,&m);
        scanf("%d %d",&h2,&m2);
        scanf("%d %d",&h3,&m3);
        if (h>=0 && h<=23 && h2>=0 && h2<=23 && h3>=0 && h3<=23 && m>=0 && m<=59 && m2>=0 && m2<=59 && m3>=0 && m3<=59) {
            dk= (h*60)+m;
            dk2=(h2*60)+m2;
            dk3=(h3*60)+m3;
            if (dk>dk2) {
                if (dk3>dk) {
                    max=dk3;
                    center=dk;
                    min=dk2;
                } else {
                    if (dk3>dk2) {
                        max=dk;
                        center=dk3;
                        min=dk2;
                    } else {
                        max=dk;
                        center=dk2;
                        min=dk3;
                    }
                }
            } else {
                if (dk3>dk2) {
                    max=dk3;
                    center=dk2;
                    min=dk;
                } else {
                    if (dk3>dk) {
                        max=dk2;
                        center=dk3;
                        min=dk;
                    } else {
                        max=dk2;
                        center=dk;
                        min=dk3;
                    }
                }
            }
            
            if (min+10>=center) {
                if (center+5>=max) {
                    printf("YES\n");
                } else {
                    printf("NO\n");
                }
            } else {
                printf("NO\n");
            }
            
        }

    }
    return 0;
}
