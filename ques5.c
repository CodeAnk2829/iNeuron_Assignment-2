//Program to display the sum of the digits of a three-digit number
#include <stdio.h>
int main(){
    int n, sum = 0;
    printf("Enter a three-digit number\n");
    scanf("%d", &n);
    sum += (n % 10);
    n /= 10;
    sum += (n % 10);
    n /= 10;
    sum += (n % 10);
    n /= 10;
    printf("Sum of the digits: %d", sum);
    return 0;
}