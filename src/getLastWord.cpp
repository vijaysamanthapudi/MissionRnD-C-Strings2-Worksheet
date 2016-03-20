/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str)
{
	if (str == NULL)
	{
		return NULL;
	}
	int i, j = 0, count = 0, index = 0,len;
	for (len = 0; str[len]; len++);
	//int len = strlen(str);
	for (i = 0; i<len - 1; i++)
	{
		if (str[i] == ' '&&str[i + 1] != ' ')
		{
			count = 0;
			index = i + 1;
		}
		else if (str[i] != ' ')
		{
			count++;

		}
	}

	char *s = (char *)malloc(sizeof(char)*(count + 1));
	for (i = index; count >= 0; j++, i++, count--)
	{
		s[j] = str[i];
	}
	s[j] = '\0';

	return s;
	
}
