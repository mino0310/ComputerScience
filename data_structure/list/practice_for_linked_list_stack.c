#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//스택 - 연결리스트로 구현


typedef struct Node 
{
	int data;
	struct Node *next;
} Node;

typedef struct Stack {
	Node *top;
} Stack;

void InitStack(Stack *stack)
{
	stack->top == NULL;
}

int IsEmpty(Stack *stack)
{
	return stack->top == NULL;
}

void Push(Stack *stack, int data)
{
	Node *now = (Node *)malloc(sizeof(Node));
	now->data = data;
	now->next = stack->top;
	stack->top = now;
}

int Pop(Stack *stack)
{
	Node *now;
	int re;
	if (IsEmpty(stack))
	{
		return 0;
	}
	now = stack->top;
	re = now->data;

	stack->top = now->next;
	free(now);
	return re;
}
