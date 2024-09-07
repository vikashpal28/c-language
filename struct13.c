#include <stdio.h>

struct employee {
    int code;
    char name[30];
    int doj[3]; // Date of joining: [day, month, year]
};

void printTenureInfo(struct employee emp, int currentYear, int currentMonth, int currentDay) {
    int years = currentYear - emp.doj[2];
    if (currentMonth < emp.doj[1] || (currentMonth == emp.doj[1] && currentDay < emp.doj[0])) {
        years--; // Adjust for partial year
    }

    if (years >= 3) {
        printf("Employee Name: %s\n", emp.name);
        printf("employee code: %d\n",emp.code);
    }
}

int main() {
    struct employee employees[4] = {
        {1, "Shahnawaz", {13, 1, 2006}},
        {4, "Amit Puri", {21, 6, 2008}},
        {102, "Irfan Moin", {12, 5, 2012}},
        {131, "Shabnam", {16, 1, 2014}}
    };

    int currentYear, currentMonth, currentDay;
    printf("Enter the current date (dd mm yyyy): ");
    scanf("%d %d %d", &currentDay, &currentMonth, &currentYear);

    printf("\nEmployees with 3 or more years of tenure:\n");
    for (int i = 0; i < 4; i++) {
        printTenureInfo(employees[i], currentYear, currentMonth, currentDay);
    }

    return 0;
}
/*
output 
Enter the current date (dd mm yyyy): 12 2 2023

Employees with 3 or more years of tenure:
Employee Name: Shahnawaz
employee code: 1
Employee Name: Amit Puri
employee code: 4
Employee Name: Irfan Moin
employee code: 102
Employee Name: Shabnam
employee code: 131
*/
