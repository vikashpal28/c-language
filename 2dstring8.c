#include<stdio.h>
#include<string.h>

#define Space 32
#define word (line[i] == 't' || line[i] == 'T') && (line[i + 1] == 'h' || \
line[i + 1] == 'H') && (line[i + 2] == 'E' || line[i + 2] == 'e') && \
(line[i + 3] == Space || line[i + 3] == '\0')

void del_the(char *line)
{
	int i, j;
	for (i = 0; line[i] != '\0'; i++)
		if (word)/*if The is encounter*/
			for (j = i; line[j] != '\0'; j++)
				line[j] = line[j + 4];/*The word is skipped and other words are saved in the string*/
}
int main()
{
	char line[80];
	puts("Enter the line");
	gets(line);
	del_the(line);
	puts("\nAfter removing all the words 'The'.\n\n");
	puts(line);
	return 0;
}
/*
output
Enter the line
the alok is the a hero.

After removing all the words 'The'.


alok is a hero.
*/