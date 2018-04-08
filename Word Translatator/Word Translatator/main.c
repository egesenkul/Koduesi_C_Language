#include <stdio.h>

int main() {
    int a,b;
    scanf("%d ",&a);
    for (b=0; b<a; b++) {
        int i,counter=0,c,d=0;
        char line[51];
        char kelime[51];
        char sessiz[51];
        scanf("%s",&line);
        for(i=0;line[i]!='\0';i++)
            if (line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u' || line[i]=='A' || line[i]=='E' || line[i]=='I' || line[i]=='O' || line[i]=='U' || line[i]=='Y' || line[i]=='y' ){
                kelime[counter]=line[i];
                counter++;
            } else {
                sessiz[d]=line[i];
                d++;
            }
        for (c=0; c<counter; c++) {
            printf("%c",kelime[c]);
        }
        for (c=0; c<d; c++) {
            printf("%c",sessiz[c]);
        }
        printf("\n");
        counter=0;
        d=0;
    }
        return 0;
}
