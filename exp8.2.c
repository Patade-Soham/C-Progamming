//241P004
//WAP to check if entered string is palindrome or not

#include <stdio.h>
#include <string.h>


int isAlphanumeric(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
}
char toLower(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}

int main() {
    char str[100];
    int i, j, len, isPalindrome = 1;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    len = strlen(str);
    for(i = 0, j = len - 1; i < j; i++, j--) {
        while (!isAlphanumeric(str[i]) && i < j) {
            i++;
        }
        while (!isAlphanumeric(str[j]) && i < j) {
            j--;
        }

        if (toLower(str[i]) != toLower(str[j])) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
/* Output
Enter a string: nitin
The string is a palindrome.

Process returned 0 (0x0)   execution time : 20.272 s
Press any key to continue.*/
