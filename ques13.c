//Program to rotate a three-digit number towards right
#include <stdio.h>
int main(){
    int n, ld, new_n;
    printf("Enter a three-digit number\n");
    scanf("%d", &n);
    ld = (n % 10);
    new_n = (ld * 100) + (n / 10);
    printf("%d has now became %d", n, new_n);
    return 0;
}