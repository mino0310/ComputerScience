#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int element;

typedef struct LIstNode {
	element data;
	struct ListNode *link;
} ListNode;

ListNode *head = NULL;

head = (ListNode *)malloc(sizeof(ListNode));

head->data = 10;
head->link = NULL;

ListNode *p;
p = (ListNode *)malloc(sizeof(ListNode));
p->data = 20;
p->link = NULL;

head->link = p;
