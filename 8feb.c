#include <stdio.h>
#include <string.h>
int main()
{
    char *v1[] = {"vikash", "alok", "ankit", "nova"};
    int count = 0;
    int char_count = 0;
    int size = sizeof(v1) / sizeof(v1[0]);
    int i, j;

    printf("count no of words : \n");
    for (i = 0; i < size; i++)
    {
        if (strcmp(v1[i], "nova") == 0)
        {
            count++;
        }
    }
    printf("%d\n", count);

    printf("Count total of character : \n");

    // for (i = 0; i < size; i++)
    // {
    //     for (j = 0; j < strlen(v1[i]); j++)
    //     {
    //         if (v1[i][j] == 'a')
    //         {
    //             char_count++;
    //         }
    //     }
    // }

    printf("%d", char_count);

    for (i = 0; i < size; i++)
    {
        char_count += strlen(v1[i]);
    }
    
     printf("%d", char_count);
    
    return 0;
}