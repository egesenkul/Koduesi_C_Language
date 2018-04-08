//
//  main.c
//  20.04.2015
//
//  Created by Ege Şenkul on 20.04.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

/*
#define S 5 // 5 öğrenci
#define E 3 // 3 sınav
#include <stdio.h>

int main() {
    int stdGrades [5][3];
    int sumExams[3] = {0,0,0};
    int sumStudens [5] = {0,0,0,0,0};
    float avgExams[3];
    float avgStudents[5];
    int i,j;
    for (i=0; i<S; i++) {
        for (j=0; j<E; j++) {
            printf("Enter exam %d for students %d;\n",j,i);
            scanf("%d",&stdGrades[i][j]);
        }
    }
    for (j=0; j<E; j++) {
        for (i=0; i<S; i++) {
            sumExams[j] += stdGrades[i][j];
        }
    }
    
    for (i=0; i<S; i++) {
        for (j=0; j<E; j++) {
            sumStudens[i] += stdGrades[i][j];
        }
    }
    
    for (j=0; j<E; j++) {
        avgExams[j]= (float) sumExams[j]/S;
        printf("AVG OF EXAM %d; %f\n",j,avgExams[j]);
    }
    for (i=0; i<S; i++) {
        avgStudents[i]= (float) sumStudens[i]/E;
        printf("AVG OF %d; %f\n",i,avgStudents[i]);
    }
    
    return 0;
}
 
 */


/*
#include <stdio.h>
int main(){
    int x=5;
    int y=3;
    int z=9;
    
    int *xPointer = &x;
    int *yPointer = &y;
    int *zPointer = &z;
    
    printf("x = %d adress of x = %d\n",x,xPointer); // sayının ramdeki adresini ve değerini söyler int type olduğu için 4 bytelık alanlar kaplarlar
    printf("y = %d adress of y = %d\n",y,&y); //yPointer yerine &y de yazabilirsin
    printf("z = %d adress of z = %d\n",z,zPointer);

    return 0;}
 */

#include <stdio.h>
//malloc(1024) dersen ramden 1024 bytelık bir yer ayarlar program için
//size of ise içerdeki datatype kadar bir yer ayarlar

/*
int main(){
    printf("size of int %d byte\n",sizeof(int));
    printf("size of double %d byte\n",sizeof(double));
    printf("size of char %d byte\n",sizeof(char));
    printf("size of 20 int %d byte\n",20 * sizeof(int));
    
    return 0;}
 
 */

int main(){
    int i;
    int *grades;
    int numOfStudents;
    
    printf("Enter the number of students:\n");
    scanf("%d", &numOfStudents);
    grades= malloc(numOfStudents*sizeof(int));
    
    for (i=0; i<numOfStudents; i++) {
        printf("Enter grade %d:\n",i+1);
        scanf("%d", &grades[i]);
    }
    
    int sum=0;
    float avg;
    printf("Grades: ");
    for (i=0; i<numOfStudents; i++) {
        printf("%d ",grades[i]);
        sum += grades[i];
    }
    avg= (float) sum/ numOfStudents;
    printf("Average: %f\n",avg);
    
    return 0;}
