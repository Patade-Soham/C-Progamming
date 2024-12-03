/*Expt. No.:5.2
UIN:241P004
Title: WAP to find the factorial of a number using recursive function. */
#include <stdio.h>


int factorial(int n) {

    if (n == 0 || n == 1) {
        return 1;
    } else {

        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

   
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        
        printf("The factorial of %d is %d\n", num, factorial(num));
    }

    return 0;
}
/*OUTPUT
Enter a number to find its factorial: 5
The factorial of 5 is 120

Process returned 0 (0x0)   execution time : 2.067 s
Press any key to continue.
*/
