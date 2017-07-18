/*
 * main.c
 *
 *  Created on: Jul 17, 2017
 *      Author: jledin
 */

#include <stdio.h>
#include <stdlib.h>

int searchInsert(int* nums, int numsSize, int target);

int main()
{
	int a[] = {1, 5, 9};
	printf("Index of Target: %d\n", searchInsert(a, 3, 1));

	return 0;
}

int searchInsert(int* nums, int numsSize, int target)
{
	int left = 0, right = numsSize - 1, middle;

	while(left <= right) // perform binary search
	{
		middle = (left + right) / 2;
		if(target > nums[middle])
		{
			left = middle + 1;
		}
		else if (target < nums[middle])
		{
			right = middle - 1;
		}
		else
		{
			return middle;
		}
	}

	// handles case where target was not found
	if(target > nums[middle]) return middle + 1;
	else return middle;
}

