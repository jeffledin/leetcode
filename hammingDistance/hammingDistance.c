/*
 * hammingDistance.c
 *
 *  Created on: Jul 16, 2017
 *      Author: jledin
 */
#include <stdio.h>
#include <stdlib.h>

int hammingDistance(int x, int y);

int main()
{
	int result;
	result = hammingDistance(0b1100, 0b0000);
	printf("Hamming Distance: %d\n", result);
	return 0;
}

int hammingDistance(int x, int y)
{
	int XORmask = (x ^ y);
	int hammingDistance = 0;

	printf("XORmask: %#010x\n", XORmask); // look for where the two variables differ

	for(int i = 0; i < 32; i++)
	{
		if(XORmask & (1 << i)) // count the ones in the mask
		{
			printf("Difference Found At Bit Position %d\n", i);
			++hammingDistance;
		}
	}

	return hammingDistance;
}
