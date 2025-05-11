#include<stdio.h>
#include<ctype.h>
#include<string.h>

void main(){
    char key[11];
    int p8[8]={6,7,8,9,1,2,3,4};
    int p10[10]={6,7,8,9,10,1,2,3,4,5};
    char temp[11];
    int cnt=0;
    char k1[10];
    char k2[10];
    char ls1[5],ls2[5];
    printf("enter the 10 bit digit\n");
    scanf("%s",&key);
    key[10]='\0';
    printf("p10 key is \n");
    for(int i=0;i<10;i++){
        printf("%d,",p10[i]);
    }
    for(int i=0;i<10;i++){
        cnt=p10[i];
        temp[i]=key[cnt-1];
    }
    temp[10]='\0';
    printf("\nbits after p10\n");
    puts(temp);
    for(int i=0;i<5;i++){
        if(i==4){
            temp[i]=temp[0];
        }
        else{
            temp[i]=temp[i+1];
        }
    }
    for(int i=5;i<10;i++){
        if(i==9){
            temp[i]=temp[5];
        }
        else{
            temp[i]=temp[i+1];
        }
    }
    printf("output after ls1:\n");
    puts(temp);
    printf("p8 key is:\n");
    for(int i=0;i<8;i++){
        printf("%d,",p8[i]);
    }
    for(int i=0;i<8;i++){
        cnt=p8[i];
        k1[i]=temp[cnt-1];
    }
    printf("\nk1 is :\n");
    puts(k1);
}
