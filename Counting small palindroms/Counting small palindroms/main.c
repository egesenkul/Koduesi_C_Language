//
//  main.c
//  Counting small palindroms
//
//  Created by Ege Şenkul on 19.03.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>

int reverse(int n) {
    int dig, inv = 0;
    while(n > 0) {
        dig = n%10;
        inv = inv*10 + dig;
        n = n/10;
    }
    return inv;
}


int main() {
    int i,cons;
    scanf("%d",&cons);
    for (i=0; i<cons; i++) {
        int a,b,counter;
        scanf("%d %d",&a, &b);
        for (counter =0; a<=b; a++) {
            if (reverse(a)==a) {
                counter++;
            }
        }
        
        printf("%d\n",counter);
    }
    
    return 0;
}