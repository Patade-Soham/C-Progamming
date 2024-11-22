
#include <stdio.h>

int main() {
int number;

// Ask for user input
printf("Enter a number: ");
scanf("%d", &number);

// Check if the number is odd or even
if (number % 2 == 0) {
printf("The number %d is Even.\n", number);
} else {
printf("The number %d is Odd.\n", number);
}

return 0;
}
