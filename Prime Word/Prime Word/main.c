#include <stdio.h>
int agirlik(char word[21]) {
    int i,sum=0;
    for(i=0;word[i]!='\0';i++){
        if(word[i] >= 'a' && word[i] <= 'z')
        {sum=sum+ word[i] - 'a' + 1;}
        else{ sum=sum+ word[i] - 'A' + 27;}}
        return sum;}

int prime(int number) {
    int i;
    for (i=2; i<number; i++) {
        if (number % i == 0)
            return 0;
    }
    return 1;
}
int main(){
    char kelime[21];
    while(scanf("%s", kelime) != EOF){
        if(prime(agirlik(kelime)))
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }
    return 0;}