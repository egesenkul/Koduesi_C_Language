//
//  main.c
//  Sum
//
//  Created by Ege Şenkul on 23.02.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>
int main(){
    int test;
    scanf("%d",&test);
    int a,b;
    for(int k = 0; k < test; k++){
        scanf("%d %d",&a, &b);
        printf("%d\n",a+b);
    }
    return 0;
}