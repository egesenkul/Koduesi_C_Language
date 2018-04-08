//
//  main.c
//  Maximum-sum pair
//
//  Created by Ege Şenkul on 6.04.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>

int main() {
    int size,i,b,c,d,max;
    scanf("%d",&d);
    for (c=0; c<d; c++) {
        scanf("%d",&size);
        int toplam=0;
        int Array[size];
        for (i=0; i<size; i++) {
            scanf("%d",&Array[i]);}
        for (b=0; b<size; b++) {
            if (Array[b]!=Array[size-b-1]) {
                max=Array[b]+Array[size-b-1];
                if (max>toplam) {
                    toplam=max;
                }
            }
        }
        printf("%d\n",toplam);
    }
    return 0;
}
