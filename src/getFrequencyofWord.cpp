/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>
int find(char str[], char word[], int i, int j);
int count_word_in_str_way_1(char *str, char *word){
	if (str == NULL || word == NULL)
	{
		return NULL;
	}
	int i, j, count = 0;
	for (i = 0; str[i]; i++)
	{
		for (j = 0; word[j]; j++)
		{
			if (str[i + j] != word[j])
			{
				break;
			}
		}
		if (word[j] == '\0')
		{
			count++;
		}
	}


	return count;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	int count = 0;


	for (int i = 0; str[i]; i++)
	{
		if (find(str, word, i, 0) != 0)
		{
			count++;
		}

	}
	return count;



}

int find(char str[], char word[], int i, int j)
{

	if (str[i] == '\0' && str[i] == word[j])
	{
		return 1;
	}
	else if (str[i] == NULL && str[i] != word[j])
	{
		return 0;
	}
	else if (str[i] != '\0' && word[j] == '\0')
	{
		return 1;
	}
	else if (str[i] == word[j])
	{
		return find(str, word, i + 1, j + 1);
	}
	else if (str[i] != word[j])
	{
		return 0;
	}
}

