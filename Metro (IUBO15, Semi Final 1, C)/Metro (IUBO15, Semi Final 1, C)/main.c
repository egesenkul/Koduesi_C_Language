//
//  main.c
//  Metro (IUBO15, Semi Final 1, C)
//
//  Created by Ege Şenkul on 10.04.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>

int main() {
    int x,y,i;
    scanf("%d",&x);
    for (y=0; y<x; y++) {
        int t,h,m,result,zaman;
        scanf("%d",&t);
        scanf("%d %d",&h,&m);
        zaman=(h*60)+m+t;
        if (zaman>= 360 && zaman<=599) {
            result= 5-(zaman%5);
        }
        else if (zaman>= 600 && zaman<=899) {
            for (i=0; i<25; i++) {
                if (600+(12*i)>=zaman) {
                    result=600+(12*i)-zaman;
                }
            }
            
            //result= 12-(zaman%12);
        }
        else if (zaman>= 900 && zaman<=1379) {
            result= 7-(zaman%7);
        }
        else if (zaman>= 1380 && zaman<=1440) {
            result= 20-(zaman%20);
        }
        else if (zaman>= 1 && zaman<=599) {
            result= 20-(zaman%20);
        }
        printf("%d\n",result);
    }
        return 0;
}
