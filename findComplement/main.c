/*
 * main.c
 *
 *  Created on: Jul 17, 2017
 *      Author: jledin
 */

#include <stdio.h>
#include <stdlib.h>

int findComplement(int num);

int main()
{
	printf("Complement of 0b101 without leading zeros is %d\n", findComplement(5));

	return 0;
}

int findComplement(int num) {
    int leadingOnePos, i = 0, numComplement;

    while(!(num & (0x80000000 >> i))) // scan for leading 1
    {
        i++;
    }

    leadingOnePos = i;

    //printf("Leading One Found %d Positions to the Right\n", leadingOnePos);

    for(int i = 0; i < (32 - leadingOnePos); i++)
    {
        num ^= (1 << i);
    }

    numComplement = num;

    return numComplement;
}
