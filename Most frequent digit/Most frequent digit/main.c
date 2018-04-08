//
//  main.c
//  Most frequent digit
//
//  Created by Ege Şenkul on 3.04.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>

int main() {
    int a,b;
    scanf("%d",&a);
    for (b=0; b<a; b++) {
        int i,dig,c0=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,max;
        int n;
        scanf("%d",&n);
        while (n!=0) {
            dig=n%10;
            n=n/10;
            switch (dig) {
                case 0:
                    c0++;
                    break;
                case 1:
                    c1++;
                    break;
                case 2:
                    c2++;
                    break;
                case 3:
                    c3++;
                    break;
                case 4:
                    c4++;
                    break;
                case 5:
                    c5++;
                    break;
                case 6:
                    c6++;
                    break;
                case 7:
                    c7++;
                    break;
                case 8:
                    c8++;
                    break;
                case 9:
                    c9++;
                break;}
        }
        
        max=c0;
        if (c1>max) {
            max=c1;
        }
        if (c2>max) {
            max=c2;
        }
        if (c3>max) {
            max=c3;
        }
        if (c4>max) {
            max=c4;
        }
        if (c5>max) {
            max=c5;
        }
        if (c6>max) {
            max=c6;
        }
        if (c7>max) {
            max=c7;
        }
        if (c8>max) {
            max=c8;
        }
        if (c9>max) {
            max=c9;
        }
        if (max==c0) {
            printf("%d\n",0);
        }
        else if (max==c1) {
            printf("%d\n",1);
        }
        else if (max==c2) {
            printf("%d\n",2);
        }
        else if (max==c3) {
            printf("%d\n",3);
        }
        else if (max==c4) {
            printf("%d\n",4);
        }
        else if (max==c5) {
            printf("%d\n",5);
        }
        else if (max==c6) {
            printf("%d\n",6);
        }
        else if (max==c7) {
            printf("%d\n",7);
        }
        else if (max==c8) {
            printf("%d\n",8);
        }
        else if (max==c9) {
            printf("%d\n",9);
        }

    }
    return 0;}