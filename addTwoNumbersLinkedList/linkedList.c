/*
 * linkedList.c
 *
 *  Created on: Jul 16, 2017
 *      Author: jledin
 */

#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

// Steps through linked list and prints out each value
void printList(struct linkedListNode *head)
{
	struct linkedListNode *current = head;

	while(current != NULL)
	{
		printf("%d", current->value);
		current = current->next;
	}

	free(current);
}

// Stores given number in reverse order
struct linkedListNode* createNumber(int d0, int d1, int d2)
{
	struct linkedListNode *numberHead = NULL;
	numberHead = malloc(sizeof(struct linkedListNode));

	struct linkedListNode *current = numberHead;

	numberHead->value = d2;
	numberHead->next = malloc(sizeof(struct linkedListNode));
	numberHead->next->value = d1;
	numberHead->next->next = malloc(sizeof(struct linkedListNode));
	numberHead->next->next->value = d0;
	numberHead->next->next->next = NULL;

//	printf("Reversed Number: ");
//
//	while(current != NULL)
//	{
//		printf("%d", current->value);
//		current = current->next;
//	}
//
//	printf("\n");

	return numberHead;
}

// Add two numbers given in linked list representation
struct linkedListNode* addLinkedListNums(struct linkedListNode* l1, struct linkedListNode* l2)
{
	struct linkedListNode *current1 = l1, *current2 = l2;
	unsigned char carry = 0, intermediateSum;

	struct linkedListNode *sumHead = NULL, *startSum = NULL;
	sumHead = malloc(sizeof(struct linkedListNode));
	startSum = sumHead; // remember where we started

	while(current1 != NULL && current2 != NULL) // TODO: handle carries
	{
		intermediateSum = current1->value + current2->value;
		printf("%d\n", intermediateSum);
		if(intermediateSum > 10)
		{
			carry = 1;
			sumHead->value = intermediateSum % 10;
		}
		else
		{
			carry = 0;
			sumHead->value = intermediateSum;
		}
		current1 = current1->next;
		current2 = current2->next;

		if((current1 != NULL) && (current2 != NULL)) // don't advance sumHead too far
		{
			sumHead->next = malloc(sizeof(struct linkedListNode));
			sumHead = sumHead->next;
		}
	}
	return startSum;
}
























