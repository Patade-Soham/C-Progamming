
//Exp 6
//WAP to define a counter function to print how many times the function is called. Use storage classes
//241P004


#include <stdio.h>


void counter() {
    static int count = 0;
    count++;
    printf("The function has been called %d times.\n", count);
}

int main() {

    counter();
    counter();
    counter();
    counter();

    return 0;
}
/* Output
The function has been called 1 times.
The function has been called 2 times.
The function has been called 3 times.
The function has been called 4 times.

Process returned 0 (0x0)   execution time : 0.016 s
Press any key to continue.*/
