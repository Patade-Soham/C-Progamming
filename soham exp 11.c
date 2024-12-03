
/*
Exp no: 11
Name: shoampatade 
UIN: 241P004
Roll no: 04 Division: C
*/


#include <stdio.h>
#include <string.h>

// Define a structure to hold employee details
struct employee {
    int id;
    char name[50];
    float salary;
};

// Function to add employee details to the file
void add_employee() {
    struct employee emp;
    FILE *file = fopen("employee_database.txt", "a");

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    // Input employee details
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter Employee Name: ");
    getchar();
    gets(emp.name);
    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    // Write employee data to the file
    fprintf(file, "%d %.2f %s\n", emp.id, emp.salary, emp.name);
    fclose(file);
    printf("Employee record added successfully!\n");
}

// Function to display all employee records from the file
void display_employees() {
    struct employee emp;
    FILE *file = fopen("employee_database.txt", "r");

    if (file == NULL) {
        printf("No employee records found!\n");
        return;
    }

    printf("\nEmployee Records:\n");
    printf("ID\tName\t\tSalary\n");
    printf("---------------------------------\n");

    // Read and display each employee record from the file
    while (fscanf(file, "%d %f %[^\n]", &emp.id, &emp.salary, emp.name) != EOF) {
        printf("%d\t%-15s%.2f\n", emp.id, emp.name, emp.salary);
    }

    fclose(file);
}

// Function to edit an employee record
void edit_employee() {
    struct employee emp;
    int id_to_edit, found = 0;
    FILE *file = fopen("employee_database.txt", "r");
    FILE *temp = fopen("temp.txt", "w");

    if (file == NULL) {
        printf("No employee records found to edit!\n");
        return;
    }

    printf("Enter the Employee ID to edit: ");
    scanf("%d", &id_to_edit);

    while (fscanf(file, "%d %f %[^\n]", &emp.id, &emp.salary, emp.name) != EOF) {
        if (emp.id == id_to_edit) {
            found = 1;
            printf("Editing Employee ID %d:\n", emp.id);
            printf("Enter New Name: ");
            getchar();
            gets(emp.name);
            printf("Enter New Salary: ");
            scanf("%f", &emp.salary);
        }
        fprintf(temp, "%d %.2f %s\n", emp.id, emp.salary, emp.name);
    }

    fclose(file);
    fclose(temp);

    if (found) {
        remove("employee_database.txt");
        rename("temp.txt", "employee_database.txt");
        printf("Employee record updated successfully!\n");
    } else {
        remove("temp.txt");
        printf("Employee ID not found!\n");
    }
}

// Function to remove an employee record
void remove_employee() {
    struct employee emp;
    int id_to_remove, found = 0;
    FILE *file = fopen("employee_database.txt", "r");
    FILE *temp = fopen("temp.txt", "w");

    if (file == NULL) {
        printf("No employee records found to delete!\n");
        return;
    }

    printf("Enter the Employee ID to remove: ");
    scanf("%d", &id_to_remove);

    while (fscanf(file, "%d %f %[^\n]", &emp.id, &emp.salary, emp.name) != EOF) {
        if (emp.id == id_to_remove) {
            found = 1;
            printf("Removing Employee ID %d: %s\n", emp.id, emp.name);
            continue;
        }
        fprintf(temp, "%d %.2f %s\n", emp.id, emp.salary, emp.name);
    }

    fclose(file);
    fclose(temp);

    if (found) {
        remove("employee_database.txt");
        rename("temp.txt", "employee_database.txt");
        printf("Employee record removed successfully!\n");
    } else {
        remove("temp.txt");
        printf("Employee ID not found!\n");
    }
}

int main() {
    int choice;

    printf("\t\t * Employee Database * \n\n");

    while (1) {
        // Menu for user
        printf("\nEmployee Database Menu:\n");
        printf("1. Add Employee Record\n");
        printf("2. Display Employee Records\n");
        printf("3. Edit Employee Record\n");
        printf("4. Remove Employee Record\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_employee();
                break;
            case 2:
                display_employees();
                break;
            case 3:
                edit_employee();
                break;
            case 4:
                remove_employee();
                break;
            case 5:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}



/*
    Output:
                 * Employee Database *


Employee Database Menu:
1. Add Employee Record
2. Display Employee Records
3. Edit Employee Record
4. Remove Employee Record
5. Exit
Enter your choice: 1
Enter Employee ID: 100
Enter Employee Name: Ramesh
Enter Employee Salary: 5
Employee record added successfully!

Employee Database Menu:
1. Add Employee Record
2. Display Employee Records
3. Edit Employee Record
4. Remove Employee Record
5. Exit
Enter your choice: 2

Employee Records:
ID      Name            Salary
---------------------------------
100     Ramesh         5.00

Employee Database Menu:
1. Add Employee Record
2. Display Employee Records
3. Edit Employee Record
4. Remove Employee Record
5. Exit
Enter your choice: 3
Enter the Employee ID to edit: 100
Editing Employee ID 100:
Enter New Name: Ramesh
Enter New Salary: 7
Employee record updated successfully!

Employee Database Menu:
1. Add Employee Record
2. Display Employee Records
3. Edit Employee Record
4. Remove Employee Record
5. Exit
Enter your choice: 4
Enter the Employee ID to remove: 100
Removing Employee ID 100: Ramesh
Employee record removed successfully!

Employee Database Menu:
1. Add Employee Record
2. Display Employee Records
3. Edit Employee Record
4. Remove Employee Record
5. Exit
Enter your choice: 5
Exiting the program.
*/

    
