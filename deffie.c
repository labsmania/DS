#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>

int power(int base, int exp, int n) {
    long long res = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            res = (res * base) % n;
        }
        base = (base * base) % n;
        exp /= 2;
    }
    return res % n;
}

void main() {
    int q, alpha, x1, x2, y1, y2, k1, k2;
    printf("enter the value of prime q\n");
    scanf("%d", &q);
    printf("enter the value of alpha\n");
    scanf("%d", &alpha);
    printf("enter the value of x for 1st person\n");
    scanf("%d", &x1);
    printf("enter the value of x for the 2nd person\n");
    scanf("%d", &x2);

    y1 = power(alpha, x1, q);  
    y2 = power(alpha, x2, q);  

    k1 = power(y2, x1, q);  
    k2 = power(y1, x2, q);  

    printf("the key for 1st person is: %d\n", k1);
    printf("the key for 2nd person is: %d\n", k2);
}
