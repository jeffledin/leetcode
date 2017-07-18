/*
 * reversedString.c
 *
 *  Created on: Jul 17, 2017
 *      Author: jledin
 */

/*
 * reverseString.c
 *
 *  Created on: Jul 16, 2017
 *      Author: jledin
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverseString(char* s);

int main()
{
	char* reversedString;

	reversedString = reverseString("hello");

	printf("Reversed String: ");
	for(int i = 0; i < strlen(reversedString); i++)
	{
		printf("%c", reversedString[i]);
	}
	printf("\n");

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

	return reversedString;
}
