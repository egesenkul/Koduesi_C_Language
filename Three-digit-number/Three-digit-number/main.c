//
//  main.c
//  Three-digit-number
//
//  Created by Ege Şenkul on 26.03.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//
/* 
 Compute the number of three-digit numbers that can be created from the digits of the three-digit input number N, such that that their middle digit is not smaller than the other two digits.
 
 Example.  If N = 139 than two numbers can be created: 193 and 391.
 
 Note. If N has two zeros than the result is 1.
 
 Example.  For N = 100 one "number" is created:  "010"
 
 */

#include <stdio.h>
int birincibasamak (int n){
    int birinci;
    birinci= n/100;
    return birinci;
}

int ikincibasamak (int n){
    int ikinci;
    ikinci= (n/10)%10;
    return ikinci;
}


int ucuncubasamak (int n){
    int ucuncu;
    ucuncu= n%10;
    return ucuncu;
}

int main() {
    int number,counter=0;
    scanf("%d",&number);
    int bir,iki,uc;
    int n1,n2,n3,n4,n5,n6;
    n1=bir*100+iki*10+uc;
    n2=bir*100+uc*10+iki;
    n3=iki*100+uc*10+bir;
    n4=iki*100+bir*10+uc;
    n5=uc*100+bir*10+iki;
    n6=uc*100+iki*10+bir;
    int m1,m2,m3,m4,m5,m6,m7,m8,m9;
    
    
    
    
    printf("%d %d %d %d\n",bir,iki,uc,counter);
    return 0;
}
