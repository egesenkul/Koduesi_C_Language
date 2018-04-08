//
//  main.c
//  Digital Time
//
//  Created by Ege Şenkul on 25.02.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
// input 3 numara olacak bu numaraları &:&:& formatında output ver

#include <stdio.h>

int main() {
    int counter,i;
    scanf("%d",&counter);
    for (i=0; i<counter; i++) {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if (c<10) {
            if (b<10) {
                printf("%d:0%d:0%d\n",a,b,c);
                       //c ve b 10dan küçük
            }
            else printf("%d:%d:0%d\n",a,b,c);//b bilinmiyor c 10dan küçük
        }
        else
            if (b<10) {
                printf("%d:0%d:%d\n",a,b,c);//c 10dan büyük b 10dan küçük
            }
        else
            printf("%d:%d:%d\n",a,b,c);//c 10dan büyük b 10dan büyük
    }
    
    return 0;
}
