//WAP to calculate sum of two matrix
// 241P004


#include <stdio.h>

int main() {
    int m, n;


    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);


    int A[m][n], B[m][n], sum[m][n];

    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }


    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("The sum of the matrices is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/* Output
Enter the number of rows and columns: 3 3
Enter elements of matrix A:
2 5 8 5 5 4 8 9 5 1
Enter elements of matrix B:
 8 9 7 4 5 6 1 2 3
The sum of the matrices is:
3 13 17
12 9 9
14 10 7

Process returned 0 (0x0)   execution time : 54.634 s
Press any key to continue.
*/
