//
//  main.c
//  Triples (IUBO15, Final, G)
//
//  Created by Ege Şenkul on 20.05.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include<stdio.h>

int find (int vec[],int m,int n){
    int vector[m];
    int i;
    for (i=0; i<m; i++) {
        if (vector[m]==-m) {
            return 1;
        }
        
    }

    return 0;}



int main()
{
    int test,number;
    scanf("%d",&test);
    
    for(int t=0;t<test;t++)
    {
        scanf("%d",&number);
        int sayac=0;
       
            int numbers[number];
            for(int i=0;i<number;i++)
            {
                scanf("%d",&numbers[i]);
            }
            
            for(int i=0;i<=number-2;i++)
            {
                for(int j=0;j<=number-1;j++)
                {
                    int x=i+j;
                    
                    if (find(numbers, number , x)) {
                        sayac++;
                    }
                
                }
            }
        
        printf("%d\n",sayac);
    }
    return 0;
}