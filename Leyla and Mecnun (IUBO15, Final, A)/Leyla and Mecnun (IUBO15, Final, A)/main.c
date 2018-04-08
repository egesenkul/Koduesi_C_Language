//
//  main.c
//  Leyla and Mecnun (IUBO15, Final, A)
//
//  Created by Ege Şenkul on 9.05.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main() {
    int x,y;
    scanf("%d",&x);
    for (y=0; y<x; y++) {
        int h,l,hl,ll,hr,lr,d,counter=0;
        float pisagor;
        scanf("%d %d",&h,&l);
        scanf("%d %d %d %d",&hl,&ll,&hr,&lr);
        scanf("%d",&d);
        pisagor=sqrtf((float)((l-(ll+lr))*(l-(ll+lr)))+((hr-hl)*(hr-hl)));
        if (d<h && d>=hr && (h-hr)<=d && hr>hl && h>hl && h>hr && l>lr && l>ll) { //hepsi hden ve lden küçük olacak
            counter+=2;
        } //sağ ardından çatı
        else if (d<h && d>=hl && d>=(h-hl) && hr>hl && h>hl && h>hr && l>lr && l>ll)
        {counter+=2;} //sol balkondan çatıya çıkış
        else if (d<h && d>=hl && (ll+lr)>=l && (hr-hl<=d) && (h-hr)<=d && hr>hl && h>hl && h>hr && l>lr && l>ll)
        {counter+=3;} //pisagorsuz 3 hamlede çıkış
        else if (d<h && d>=hl && pisagor<=d && (ll+lr)<l && (h-hr)<=d && hr>hl && h>hl && h>hr && l>lr && l>ll)
        {counter+=3;} //pisagorlu 3 hamlede çıkış
        else if (d>=h && h>hl && h>hr && l>lr && l>ll
                 )
        {   counter++;
        }//çatıya direk çıkış
        printf("%d\n",counter);
        
    }
    return 0;
}
