//
//  main.c
//  Hotel (IUBO15, Final, B)
//
//  Created by Ege Şenkul on 20.05.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <stdio.h>

float areaofbalcon(float l, float h) // balkonun alanını bulur
{
    float area;
    area=l*h;
    return area;
}

float areaofceramic(float f){ //seramik alanı
    float areac;
    areac=f*f;
    return areac;

}

int boyceramic(float balkonlength,float ceramicleng){ //boyuna kaç seramik kullanılacak
    int num;
    num=(balkonlength/ceramicleng);
    return num;
}

int enceramic(float balkonweigh,float ceramiclen){ //enine kaç seramik kullanılacak
    int num2;
    num2=(balkonweigh/ceramiclen);
    return num2;
}

int main() {
    int x,y;
    scanf("%d",&x);
    for (y=0; y<x; y++) {
        int numofbalconies,i,j;
        float wastearea;
        float minlengthceramic=50; //ceramic alanı*kaç adet-balkon alanı
        float minwastearea=100000;
        scanf("%d",&numofbalconies); // kaç adet balkon olacak
        if (numofbalconies<=300 && numofbalconies>=1) { //soru bu şartı vermiş
            float lenghofbalconies[numofbalconies];
            float widthofbalconies[numofbalconies];
            for (i=0; i<numofbalconies; i++) {
                scanf("%f %f",&lenghofbalconies[i],&widthofbalconies[i]);
            } //balkon uzunluk ve enini almak için
            float balkonalan[numofbalconies];
            for (i=0; i<numofbalconies; i++) {
                balkonalan[i]=areaofbalcon(lenghofbalconies[i], widthofbalconies[i]);
            } //balkonların alanları
            int ceramictype;
            scanf("%d",&ceramictype);
            float lengthceramic[ceramictype];
            for (i=0; i<ceramictype; i++) {
                scanf("%f",&lengthceramic[i]);
            }
            float ceramicalan[ceramictype];
            for(i=0; i<ceramictype; i++){
                ceramicalan[i]=areaofceramic(lengthceramic[i]);
            }
            for (i=0; i<numofbalconies; i++) {
                for (j=0; j<ceramictype; j++) {
                    wastearea=ceramicalan[j]*(boyceramic(lenghofbalconies[i], lengthceramic[j]))-balkonalan[i];
                    if (wastearea<=minwastearea) {
                        minwastearea=wastearea;
                        minlengthceramic=lengthceramic[i];
                    }
                }
            }
        
        
        
        
        }
        
        printf("%f %f",minwastearea,minlengthceramic);
    }
    
    
    
    return 0;
}
