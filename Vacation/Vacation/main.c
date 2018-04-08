//
//  main.c
//  Vacation
//
//  Created by Ege Şenkul on 11.04.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>

int main() {
    int x,y;
    scanf("%d",&x);
    for (y=0; y<x; y++) {
        int T1,V1,T2,V2,T3,V3,yol;
        float result,point,yol1,yol2,yol3;;
        scanf("%d %d %d %d %d %d",&T1,&V1,&T2,&V2,&T3,&V3);
        yol=(T1*V1)+(T2*V2)+(T3*V3);
        point=yol/2;
        yol1=T1*V1;
        yol2=(T1*V1)+(T2*V2);
        yol3=(T1*V1)+(T2*V2)+(T3*V3);
        if (point<yol1) {
            result=(point/V1);
        }
        else if (point==yol1){result=T1;}
        else if (point>yol1 && point<yol2){
            point=point-yol1;
            result=(point/V2)+T1;
        }
        else if (point==yol2){result=T1+T2;}
        else if (point>yol2 && point<yol3){
            point=point-yol2;
            result=(point/V3)+T1+T2;
        }
        else if (point==yol3){result=T1+T2+T3;}
        printf("%.2f\n",result);
    }
    return 0;
}
