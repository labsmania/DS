#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>

bool prime(int n){
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int gcd(int n1,int n2){
    for(int i=2;i<n1&&i<n2;i++){
        if(n1%i==0 && n2%i==0){
            return i;
        }
    }
    return 1;
}

int power(int exp,int base,int n){
    long long res=1;
    while(exp>0){
        if(exp%2==1){
            res=(res*base)%n;
        }
        base=(base*base)%n;
        exp/=2;
    }
    return res%n;
}

void main(){
    int p,q,n,phin,e,d;
    int data,cipher,msg;
    while(1){
        printf("enter 2 prime numbers p and q\n");
        scanf("%d%d",&p,&q);
        if(!prime(p) || !prime(q)){
            printf("enter valid prime numbers\n");
        }
        else if(prime(p) && prime(q)){
            break;
        }
    }
    n=p*q;
    phin=(p-1)*(q-1);
    for(int i=5;i<=100;i++){
        if(gcd(i,phin)==1){
            e=i;
            break;
        }
    }
    printf("e:%d\n",e);
    for(int i=e+1;i<=100;i++){
        if((i*e)%phin==1){
            d=i;
            break;
        }
    }
    printf("d:%d\n",d);
    printf("enter any numeric data\n");
    scanf("%d",&data);
    cipher=power(e,data,n);
    printf("cipher text:\n");
    printf("%d\n",cipher);
    msg=power(d,cipher,n);
    printf("message:\n");
    printf("%d",msg);
}
