// Program to make the last digit of a number stored in a variable as zero.
#include <stdio.h>
int main(){
    int n, ld, new_n;
    printf("Enter a number\n");
    scanf("%d", &n);
    ld = (n % 10);
    new_n = (n - ld);
    printf("%d has now became %d", n , new_n);
    return 0;
}