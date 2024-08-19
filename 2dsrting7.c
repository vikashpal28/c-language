#include<stdio.h>
#include<conio.h>
#define Vowel line[i] == 'A' || line[i] == 'a' || line[i] == 'E' || line[i] == 'e' \
 || line[i] == 'I' || line[i] == 'i' || line[i] == 'O' || line[i] == 'o' || \
 line[i] == 'U' || line[i] == 'u'
 
void del_vow(char *line)
{
	int i, j;
	for (i = 0; line[i] != '\0'; i++)
		if (Vowel)
		{
		    for (j = i; line[j] != '\0'; j++)
				line[j] = line[j + 1];
			i--;
		}

}
int main()
{
	char line[80];
	puts("Enter the line");
	gets(line);
	del_vow(line);
	printf("\nLine without vowels\n");
	puts(line);
	getch();
	return 0;
}