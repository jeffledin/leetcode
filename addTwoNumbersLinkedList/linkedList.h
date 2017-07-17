/*
 * linkedList.h
 *
 *  Created on: Jul 16, 2017
 *      Author: jledin
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

struct linkedListNode {
	int value;
	struct linkedListNode* next;
};

struct linkedListNode* createNumber(int d0, int d1, int d2);
void printList(struct linkedListNode *head);
struct linkedListNode* addLinkedListNums(struct linkedListNode* l1, struct linkedListNode* l2);


#endif /* LINKEDLIST_H_ */
