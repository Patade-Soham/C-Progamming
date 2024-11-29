//exp10 task 2
//WAP to print the elements of an array in reverse order using pointers
//241P004

#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int *ptr = arr;


    printf("Array elements in reverse order are:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}
/*Enter the number of elements in the array: 1 2 3 4
Enter 1 elements:
Array elements in reverse order are:
4 3 2 1

Process returned 0 (0x0)   execution time : 8.125 s
Press any key to continue.*/
