//Program to append a digit in a number and print the resulting value
#include <stdio.h>
int main(){
    int num, digit;
    int new_num;
    printf("Enter a number and then a digit\n");
    scanf("%d %d", &num, &digit);
    new_num = (num * 10) + digit;
    printf("%d after appending has now became %d", num, new_num);
    return 0;
}