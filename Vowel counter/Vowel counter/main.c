//
//  main.c
//  Vowel counter
//
//  Created by Ege Şenkul on 6.04.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include<stdio.h>
int main(){
    char line[1001];
    int a,b,i,v=0;
    scanf("%d ",&b);
    for (a=0; a<b; a++) {
        gets(line);
        for(i=0;line[i]!='\0';i++)
        {if(line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u' || line[i]=='A' || line[i]=='E' || line[i]=='I' || line[i]=='O' || line[i]=='U' || line[i]=='Y' || line[i]=='y' )
                v++;}
        printf("%d\n",v);
        v=0;}
    return 0;
}
