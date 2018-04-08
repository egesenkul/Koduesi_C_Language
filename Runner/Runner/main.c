//
//  main.c
//  Runner
//
//  Created by Ege Şenkul on 4.04.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>

int main() {
    int a,b;
    scanf("%d",&a);
    for (b=0; b<a; b++) {
        float firstday,sum,hedef,second;
        int counter=1;
        scanf("%f %f",&firstday,&hedef);
        if (firstday<=5 && firstday>=1 && hedef>=firstday) {
            if (hedef<=250 && hedef>=1) {
                sum=0;
                second=firstday;
                while (sum<=hedef) {
                    second= (second/100)*10+second;
                    sum =sum+second;
                    counter++;
                }
                printf("%d\n",counter);
                counter=1;

            }
                    }
        

    }
    
        return 0;
}
