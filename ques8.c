//Program to check whether the given number is Even or Odd by using bitwise operator
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    if((n & 1) == 0){
        printf("%d is Even", n);
    }else{
        printf("%d is Odd", n);
    }
    return 0;
}