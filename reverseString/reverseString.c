/*
 * reverseString.c
 *
 *  Created on: Jul 16, 2017
 *      Author: jledin
 */
#include <stdio.h>
#include <stdlib.h>

char* reverseString(char* s);

int main()
{
	char* reversedString;

	reversedString = reverseString("race a car");

	return 0;
}

char* reverseString(char* s)
{
	char sLength = strlen(s);
	char *reversedString = (char *)malloc(sLength);

	for(int i = 0; i < sLength; i++)
	{
		reversedString[i] = s[sLength - i - 1];
	}

	printf("Reversed String: ");
	for(int i = 0; i < strlen(reversedString); i++)
	{
		printf("%c", reversedString[i]);
	}
	printf("\n");

	return reversedString;
}

