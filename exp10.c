//exp10
//WAP to add two numbers using pointers
//241P004

#include <stdio.h>

int main() {
    int num1, num2, sum;
    int *ptr1, *ptr2, *ptr_sum;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);


    ptr1 = &num1;
    ptr2 = &num2;
    ptr_sum = &sum;


    *ptr_sum = *ptr1 + *ptr2;

    printf("Sum of %d and %d is: %d\n", *ptr1, *ptr2, *ptr_sum);

    return 0;
}
/*
Enter first number: 4
Enter second number: 5
Sum of 4 and 5 is: 9

Process returned 0 (0x0)   execution time : 2.125 s
Press any key to continue.*/
