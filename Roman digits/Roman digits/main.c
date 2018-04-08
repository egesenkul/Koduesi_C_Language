#include<stdio.h>

void symbol (int n){
    int i,j;
        for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j || j==(n-i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

}



int main()
{
    printf("Enter any number : ");
    int a;
    scanf("%d",&a);
    symbol(2*a-1);

        return 0;
}
