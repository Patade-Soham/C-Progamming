//WAP to find the length of string without using library function
//241P004
#include <stdio.h>

int main() {
    char str[100];
    int length = 0;


    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    while (str[length] != '\0') {
        length++;
    }


    printf("The length of the string is: %d\n", length);

    return 0;
}
/* Output
Enter a string: 4 5 8
The length of the string is: 7

Process returned 0 (0x0)   execution time : 4.673 s
Press any key to continue.*/
