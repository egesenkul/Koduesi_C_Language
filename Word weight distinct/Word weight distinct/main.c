//
//  main.c
//  Word weight distinct
//
//  Created by Ege Şenkul on 8.04.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//


#include<stdio.h>
int agirlik(char word[101]) {
    int i,sum=0;
    for(i=0;word[i]!='\0';++i){
        switch (word[i]) {
            case 'a': case 'A':
                sum=sum+1;
                break;
            case 'b': case 'B':
                sum=sum+2;
                break;
            case 'c': case 'C':
                sum=sum+3;
                break;
            case 'd': case 'D':
                sum=sum+4;
                break;
            case 'e': case 'E':
                sum=sum+5;
                break;
            case 'f': case 'F':
                sum=sum+6;
                break;
            case 'g': case 'G':
                sum=sum+7;
                break;
            case 'h': case 'H':
                sum=sum+8;
                break;
            case 'i': case 'I':
                sum=sum+9;
                break;
            case 'j': case 'J':
                sum=sum+10;
                break;
            case 'k': case 'K':
                sum=sum+11;
                break;
            case 'l': case 'L':
                sum=sum+12;
                break;
            case 'm': case 'M':
                sum=sum+13;
                break;
            case 'n': case 'N':
                sum=sum+14;
                break;
            case 'o': case 'O':
                sum=sum+15;
                break;
            case 'p': case 'P':
                sum=sum+16;
                break;
            case 'q': case 'Q':
                sum=sum+17;
                break;
            case 'r': case 'R':
                sum=sum+18;
                break;
            case 's': case 'S':
                sum=sum+19;
                break;
            case 't': case 'T':
                sum=sum+20;
                break;
            case 'u': case 'U':
                sum=sum+21;
                break;
            case 'v': case 'V':
                sum=sum+22;
                break;
            case 'w': case 'W':
                sum=sum+23;
                break;
            case 'x': case 'X':
                sum=sum+24;
                break;
            case 'y': case 'Y':
                sum=sum+25;
                break;
            case 'z': case 'Z':
                sum=sum+26;
                break;
        }}
    return sum;}

#include<stdio.h>
#include <string.h>

int main() {
    int  i, j, k;
    char arr[101];
    char arr2[101];
    gets(arr);
    arr2[0]=arr[0];
    k=1;
    for (i=0; i<strlen(arr); i++) {
        for (j=i+1; j<strlen(arr); j++) {
            if (arr[j]!=arr[i]) {
                arr2[k]=arr[i];
                k++;
                i++;
                
            }
        }
    }
    
    
    for (i=0; i<k; i++) {
        printf("%c",arr2[i]);
    }
   
    
    return 0;
}