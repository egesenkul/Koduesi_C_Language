//
//  main.c
//  Arrow
//
//  Created by Ege Şenkul on 10.04.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>

int main() {
    int n,a,b,c,d,e,f,g,h;
    
    scanf("%d",&n);
    for (a=1; a<=n; a++) {
        for (b=0; b<3*n; b++) {
            printf(" ");
        }
        for(c=0;c<a;c++){
        printf("*");}
        printf("\n");
    }
    for (f=1; f<=n; f++) {
        
        for (d=0; d<3*n; d++) {
            printf("*");
            
            }
        for (g=0; g<n/2; g++) {
            for (e=0; e<n; e++) {
                printf("*");
            }
            for (h=0; h<n/2; h++) {
                printf("*");
            }
            
            printf("\n");
        }

        }
         
    for (a=n; a>=1; a--) {
        for (b=0; b<3*n; b++) {
            printf(" ");
        }
        for(c=a;c>0;c--){
            printf("*");}
        printf("\n");
    }
        return 0;
}
