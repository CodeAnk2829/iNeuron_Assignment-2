//Program to print unit digit of a given number
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    printf("Unit digit - %d", (n % 10));
    return 0;
}