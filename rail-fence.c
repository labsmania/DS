#include<stdio.h>
#include<ctype.h>
#include<string.h>

void main(){
    char msg[20];
    char c[20],d[20];
    printf("enter the message:\n");
    scanf("%s",&msg);
    int l=strlen(msg);
    int j=0;
    for(int i=0;i<l;i++){
        if(i%2==0){
            c[j++]=msg[i];
        }
    }
    for(int i=0;i<l;i++){
        if(i%2==1){
            c[j++]=msg[i];
        }
    }
    c[j]='\0';
    printf("cipher text:%s\n",c);
    int k;
    if(l%2==0){
        k=l/2;
    }
    else{
        k=l/2+1;
    }
    j=0;
    for(int i=0;i<k;i++){
        d[j]=c[i];
        j=j+2;
    }
    j=1;
    for(int i=k;i<l;i++){
        d[j]=c[i];
        j=j+2;
    }
    printf("decrypted message:%s\n",d);
}
