/*
 * main.c
 *
 *  Created on: Jul 16, 2017
 *      Author: jledin
 */


#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

int main()
{
	struct linkedListNode *head = NULL, *myNum1 = NULL, *myNum2 = NULL, *mySum = NULL;
	head = malloc(sizeof(struct linkedListNode));

	myNum1 = createNumber(1, 2, 3);
	myNum2 = createNumber(2, 3, 4);
	mySum = addLinkedListNums(myNum1, myNum2);

	printf("Reversed myNum1: ");
	printList(myNum1);
	printf("\n");
	printf("Reversed myNum2: ");
	printList(myNum2);
	printf("\n");
	printf("Sum of myNum1 and myNum2: ");
	printList(mySum);
	printf("\n");

	return 0;
}
