#include<stdio.h>
#include<conio.h>
#include<Windows.h>
struct studata
{
	int roll;
	char name[50];
	char depart[50];
	char course[20];
	int yoj;
}nos[450] = { 03, "Kishor", "IT", "B.tech", 2014,
10, "Mohammad Siraj Alam", "Computer Science", "B.Tech", 2014,
53, "Deepak", "Computer Applications", "BCA", 2013,
13, "Karan", "Mechanical", "Diploma", 2013,
1, "Aakash", "Tool and Die", "Diploma", 2012,
2, "Ramesh", "IT", "B.tech", 2014,
55,"vikash","CSE", "B.tech", 2023
};
void student_in_year(int year)
{
	int i;
	printf("\n\t\tYear of joining : %d\n\n", year);
	for (i = 0; i <= 450; i++)
	{
		if (nos[i].yoj == year)
		{

			printf("\nRoll Number : %d", nos[i].roll);
			printf("\nName : %s", nos[i].name);
			printf("\nDepartment : %s", nos[i].depart);
			printf("\nCourse : %s\n", nos[i].course);
		}
	}
}
void student_data(int enroll)
{
	int i;
	printf("\nRoll number : %d", enroll);
	for (i = 0; i <= 450; i++)
	{
		if (nos[i].roll == enroll)
		{
			printf("\nName : %s", nos[i].name);
			printf("\nDepartment : %s", nos[i].depart);
			printf("\nCourse : %s\n", nos[i].course);
			printf("\nYear of joining : %d\n", nos[i].yoj);
		}
	}
}
int main()
{
	int yoj, roll;
	printf("\nEnter year of joining of the students : ");
	scanf("%d", &yoj);
	student_in_year(yoj);
    _getch();
	system("cls");
	printf("\nEnter the roll number of the studnet you want data : ");
	scanf("%d", &roll);
	student_data(roll);
	_getch();
	return 0;
}
/*
output

Enter year of joining of the students : 2014

                Year of joining : 2014


Roll Number : 3
Name : Kishor
Department : IT
Course : B.tech

Roll Number : 10
Name : Mohammad Siraj Alam
Department : Computer Science
Course : B.Tech

Roll Number : 2
Name : Ramesh
Department : IT
Course : B.tech


Enter the roll number of the studnet you want data : 55

Roll number : 55
Name : vikash
Department : CSE
Course : B.tech

Year of joining : 2023
*/