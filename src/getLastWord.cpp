/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
//int move(char str[]);
char * get_last_word(char * str)
{
	if (str == NULL)
	{
		return NULL;
	}
	int i, last_char = 0, count = 0, index = 0, j = 0;


	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			last_char = i;
		}
	}
	for (i = last_char; i >= 1; i--)
	{
		if (str[i] != ' ' && str[i - 1] == ' ')
		{
			index = i;
			break;
		}
	}
	//printf("index is at %c\n last char is at %c", str[index], str[last_char]);
	char *s = (char *)malloc(sizeof(char)*(last_char - index + 1));
	for (i = index; i <= last_char; i++)
	{
		if (str[i] != ' ')
		{
			s[j] = str[i];
			j++;

			
		}
	}

	s[j] = '\0';
	return s;
}




