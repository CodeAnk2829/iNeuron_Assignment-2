//Program to print the size of int, char, float and double type variable
#include <stdio.h>
int main(){
    int i;
    char ch;
    float f;
    double d;
    printf("Size of int: %d\n", sizeof(i));
    printf("Size of char: %d\n", sizeof(ch));
    printf("Size of float: %d\n", sizeof(f));
    printf("Size of double: %d\n", sizeof(d));
    return 0;
}