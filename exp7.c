//Exp 7
// WAP to find largest element in array
//241P004
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: \n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int largest = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}
/*Enter the number of elements in the array: 1 2 5 9
Enter 1 elements:
The largest element in the array is: 9

Process returned 0 (0x0)   execution time : 6.109 s
Press any key to continue.*/
