#include<stdio.h>
#include<ctype.h>
#include<string.h>

void main(){
    char message[500];
    char encrypted[500];
    int key;
    printf("enter the message you wish to encrypt\n");
    scanf("%s",&message);
    printf("enter the key\n");
    scanf("%d",&key);
    for(int i=0;i<strlen(message);i++){
        char ch=message[i];
        if(isalnum(ch)){
            if(islower(ch)){
                encrypted[i]=(ch-'a'+key)%26+'a';
            }
            if(isupper(ch)){
                encrypted[i]=(ch-'A'+key)%26+'A';
            }
            if(isdigit(ch)){
                encrypted[i]=(ch-'0'+key)%26+'0';
            }
        }
        else{
            printf("enter a valid message which has only alphabets and number\n");
        }
    }
    printf("Encrypted message: %s",encrypted);
}
