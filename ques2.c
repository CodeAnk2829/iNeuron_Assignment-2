//Program to print the given number without its last digit
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    printf("%d without the last digit become %d", n, (n / 10));
    return 0;
}