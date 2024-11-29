//Design a structure student_record to contain name, roll_number and total marks obtained.
// WAP to read 5 students data from the user and then display the topper on the screen
//241P004


#include <stdio.h>
#include <string.h>

struct student_record {
    char name[50];
    int roll_number;
    float total_marks;
};

int main() {
    struct student_record students[5];
    int i;
    int topper_index = 0;


    printf("Enter details for 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        printf("Enter roll number of student %d: ", i + 1);
        scanf("%d", &students[i].roll_number);

        printf("Enter total marks of student %d: ", i + 1);
        scanf("%f", &students[i].total_marks);

        getchar();
    }


    for (i = 1; i < 5; i++) {
        if (students[i].total_marks > students[topper_index].total_marks) {
            topper_index = i;
        }
    }


    printf("\nThe topper is:\n");
    printf("Name: %s\n", students[topper_index].name);
    printf("Roll Number: %d\n", students[topper_index].roll_number);
    printf("Total Marks: %.2f\n", students[topper_index].total_marks);

    return 0;
}
/* Output
Enter details for 5 students:

Enter name of student 1: ram
Enter roll number of student 1: 1
Enter total marks of student 1: 50

Enter name of student 2: sam
Enter roll number of student 2: 2
Enter total marks of student 2: 70

Enter name of student 3: om
Enter roll number of student 3: 3
Enter total marks of student 3: 85

Enter name of student 4: sid
Enter roll number of student 4: 4
Enter total marks of student 4: 75

Enter name of student 5: jay
Enter roll number of student 5: 5
Enter total marks of student 5: 92

The topper is:
Name: jay
Roll Number: 5
Total Marks: 92.00

Process returned 0 (0x0)   execution time : 88.307 s
Press any key to continue.*/
