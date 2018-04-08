//
//  main.c
//  Sum (IUBO15,Semi Final 1,A)
//
//  Created by Ege Şenkul on 23.03.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//S = a2 + b2 + c2 d2

#include <stdio.h>

int birincibasamak (int n){
    int birinci;
    birinci= n/1000;
    return birinci;
}

int ikincibasamak (int n){
    int ikinci;
    ikinci= (n/100)%10;
    return ikinci;
}


int ucuncubasamak (int n){
    int ucuncu;
    ucuncu= (n/10)%10;
    return ucuncu;
}


int dorduncubasamak (int n){
    int dorduncu;
    dorduncu= n%10;
    return dorduncu;
}

int main() {
    int counter,f,number,s;
    scanf("%d",&f);
    for (counter=0; counter<f; counter++) {
        scanf("%d",&number);
        s= (birincibasamak(number)*birincibasamak(number))+(ikincibasamak(number)*ikincibasamak(number))+(ucuncubasamak(number)*ucuncubasamak(number))*(dorduncubasamak(number)*dorduncubasamak(number));
        printf("%d\n",s);
        
    }
    
    return 0;
}
