//
//  main.c
//  Linear system 2
//
//  Created by Ege Şenkul on 25.03.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>

int main() {
    int a1,b1,c1,a2,b2,c2,D,Dx,Dy;
    int x,y,b,c;
    scanf("%d",&b);
    for (c=0; c<b; c++) {
        scanf("%d %d %d %d %d %d",&a1,&b1,&c1,&a2,&b2,&c2);
        D= a1*b2-a2*b1;
        Dx= c1*b2-c2*b1;
        Dy= a1*c2-a2*c1;
        if (D!=0) {
            x=Dx/D;
            y=Dy/D;
            printf("%d %d\n",x,y);
        }
        else if (Dx==0 && Dy==0)
            printf("Infinite solutions\n");
        else printf("No Solutions\n");
    }
    
    return 0;
}