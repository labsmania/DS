#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
    char msg[20];
    int a[3][3] = {  { 6, 24, 1 }, { 13, 16, 10 }, { 20, 17, 15 }  };
    int b[3][3] = {  { 8, 5, 10 }, { 21, 8, 21 }, { 21, 12, 8 }  };

    int c[20],d[20],t=0;
    printf("enter the message in uppercase, 3 continuous letters\n");
    scanf("%s",msg);
    for(int i=0;i<3;i++){
        c[i]=msg[i]-65;
        printf("%d\t",c[i]);
    }
    for(int i=0;i<3;i++){
        t=0;
        for(int j=0;j<3;j++){
            t=t+(a[i][j]*c[j]);
        }
        d[i]=t%26;
    }
    printf("\nciphet text:\t");
    for(int i=0;i<3;i++){
        printf("%c",d[i]+65);
    }
    for(int i=0;i<3;i++){
        t=0;
        for(int j=0;j<3;j++){
            t=t+(b[i][j]*d[j]);
        }
        c[i]=t%26;
    }
    printf("\ndecrypted message:\t");
    for(int i=0;i<3;i++){
        printf("%c",c[i]+65);
    }
    return 0;
}
