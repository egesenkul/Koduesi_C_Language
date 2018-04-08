//
//  main.c
//  Difference (IUBO15, Semi Final 2, A)
//
//  Created by Ege Şenkul on 22.03.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//4. %10
//3. (a/10)%10)
//2. (a/100)%10)
//1. /1000

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

int sum (int n){
    int toplam;
    toplam = birincibasamak(n)+ikincibasamak(n)+ucuncubasamak(n)+dorduncubasamak(n);
    return toplam;
}

int rakamlarcarpim (int n) {
    int carpim;
    carpim = birincibasamak(n)*ikincibasamak(n)*ucuncubasamak(n)*dorduncubasamak(n);
    return carpim;
}

int main() {
    int a,i,counter;
    scanf("%d",&i);
    for (counter=0; counter<i; counter++) {
        scanf("%d",&a);
        printf("%d\n",rakamlarcarpim(a)-sum(a));
    }
    return 0;
}
