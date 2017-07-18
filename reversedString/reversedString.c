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
	char s[] = "hello";

	reversedString = reverseString(s);

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
	int sLength = strlen(s);
	int left = 0, right = sLength - 1;

	while(left < right)
	{
		char temp = s[left];
		s[left] = s[right];
		s[right] = temp;
		left++;
		right--;
	}

	return s;
}
