//
//  main.c
//  Fancy numbers
//
//  Created by Ege Şenkul on 4.04.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>

int evenchecker(int a){
    while (a!=0) {
        if ((a%10)%2) {
            return 1;
        }
    }
    return 0;}





int main(){
    if (evenchecker(121)) {
        printf("a");
    }
    
    return 0;
}900000

/* 
 1
 10
 100
 1000
 10000
 100000
 */