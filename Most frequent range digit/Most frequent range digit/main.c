#include <stdio.h>

int fonk(int f){
    int k;
    int array[11]={0,0,0,0,0,0,0,0,0,0,0};
    while (f!=0) {
        k=f%10;
        array[k]++;
        f=f/10;
    }
    return array[11];
}


int main()
{
    int a,b,m,n,c,i,max;
    int array[11];
    scanf("%d",&a);
    for (b=0; b<a; b++) {
        scanf("%d %d",&m,&n);
        for (c=m; c<=n; c++) {
            fonk(c);}
        max=array[0];
        for (i=1; i<11; i++) {
            if (array[i]>max) {
                max=array[i];
            }
        }
        printf("%d",max);
    }
    return 0;
}