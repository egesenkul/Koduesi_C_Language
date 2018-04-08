//
//  main.c
//  6.04.2015
//
//  Created by Ege Şenkul on 6.04.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.


//mylib adında kendi kütüphanemizi oluşturduk böylelikle main sayfası daha temiz kaldı
/*
#include <stdio.h>
#include "mylib.h" //kendi oluşturduğumuz kütüphaneden yararlanacağımızı söyledik
int main() {
    int n;
    scanf("%d",&n);
    printf("FACTORIAL OF N IS:%d",fact(n));
    return 0;
}
 ortalama
 int myArray[10]={1,2,3,4,5,6,7,8,9,0};    //arrayın kaça kaçlık olduğunu söyledik eğer elemanları girmezsen ramdan random değer verir
 int i,sum=0;
 float avg;
 for (i=0; i<10; i++) {
 sum=sum+myArray[i];
 }
 avg=sum/10;
 printf("%.2f",avg); //printf("%d"myArray[i]) arraydeki değerleri yazdırır */

#include <stdio.h>
/* string tutmak
 
 int main(){
    char name[6]={'h','e','l','l','o'}; //her zaman stringden 1 fazla oluşturmak lazım
    char name2[6]= "hello";
    printf("%s\n",name);
    printf("%s\n",name2);
    
    
    return 0;}

*/

/* 5 değerin ortalaması
int main(){
    int grade [5];
    int i,sum=0;
    for (i=0; i<5; i++) {
        printf("Enter grade %d;",i+1);
        scanf("%d",&grade[i]);
        sum+=grade[i];
    }
    printf("avarage is %d",sum/5);
    
    return 0;}
*/
#define numOfStudents 5
int main(){
    char name[numOfStudents] [20]; //10 öğrenci isimler maximum 20 karakter
    int grades[numOfStudents]; // 10 öğrenciye 10 tane not
    int i,bestGrade;
    int bestStudentIndex=0;
    for (i=0; i<numOfStudents; i++) {
        printf("Enter name of student%d\n",i);
        scanf("%s",&name[i]);
        printf("Enter grade of student %d\n",i);
        scanf("%d",&grades[i]);
    }
    for (i=0; i<numOfStudents; i++) {
        bestGrade=grades[0];
        if (grades[i]>bestGrade) {
            bestGrade=grades[i];
            bestStudentIndex=i;
        }
    }
    printf("%s %d",name[bestStudentIndex], bestGrade);
    return 0;}


