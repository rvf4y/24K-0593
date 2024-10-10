#include <stdio.h>
int main() {
    char inp[11];
    int a=0,e=0,i=0,o=0,u=0;
    printf("Enter a word \n");
    scanf(" %s ", inp);
    for(int i=0; i<11;i++){
        if(inp[i]=='a'||inp[i]=='A'){a++;}
        else if(inp[i]=='e'||inp[i]=='E'){e++;}
        else if(inp[i]=='i'||inp[i]=='I'){i++;}
        else if(inp[i]=='o'||inp[i]=='O'){o++;}
        else if(inp[i]=='u'||inp[i]=='U'){u++;}
    }
    printf ("VOWEL \n a= %d , e= %d , i=%d , o= %d , u=%d ",a,e,i,o,u);
}
