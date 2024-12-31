#include <stdio.h>


int Check(char x) {
    int cache=x-'a';
    if (cache>=0 & cache<26){return 1;}
    if (cache<0 & cache>=-32){return -1;}
    return 0;
}

char Transform(char x) {
    int check = Check(x);
    if (check==1) {
        printf("Bigger:\t");
        return x-32;
    }
    if (check==-1) {
        printf("Smaller:\t");
        return x+32;
    }
    printf("Error!\t%c",x);
    return "";
}

void main() {
    char a;int b=0;
    scanf("%c", &a);
    printf("%c",Transform(a));
}