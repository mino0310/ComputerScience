#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD_SIZE 100
#define MAX_MEANING_SIZE 100


typedef struct {
	char word[MAX_WORD_SIZE];
	char meaning[MAX_MEANING_SIZE];
} element;

typedef struct TreeNode {
	element key;
	struct TreeNode *left, *right;
} TreeNode;

int compare(element e1, element e2)
{
	return strcmp(e1.word, e2.word);
}

void display(TreeNode *p)
{
	if (p != NULL)
	{
		printf("(");
		display(p->left);
		printf("%s:%s", p->key.word, p->key.meaning);
		display(p->right);
		printf(")");
	}
}

//순환적인 탐색함수
/*
TreeNode *search(TreeNode *node, int key)
{
	if (node == NULL) return NULL;
	if (key == node->key) return node;
	else if (key < node->key)
		return search(node->left, key);
	else
		return search(node->right, key);
}*/

//반복적인 탐색함수
TreeNode *search(TreeNode *root, element key)
{
	TreeNode *p = root;

	while (p != NULL)
	{
		if (compare(key, p->key) == 0)
			return p;
		else if (compare(key, p->key) < 0)
			p = p->left;
		else if (compare(key, p->key) > 0)
			p = p->right;
	}
	return p;
}

//노드 생성 함수
TreeNode *new_node(element item)
{
	TreeNode *temp = (TreeNode *)malloc(sizeof(TreeNode));
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;
}

// 이진트리 삽입 프로그램
TreeNode *insert_node(TreeNode *node, element key)
{
	if (node == NULL) return new_node(key);
	if(compare(key, node->key) < 0)
		node->left = insert_node(node->left, key);
	else if (compare(key, node->key) > 0)
		node->right = insert_node(node->right, key);
	return node;
}

// 이진 트리 최소 키값 탐색 함수
TreeNode *min_value_node(TreeNode *node)
{
	TreeNode *current = node;
	while (current->left != NULL)
		current = current->left;
	return current;
}

// 이진트리 삭제 함수
TreeNode *delete_node(TreeNode *root, element key)
{
	if (root == NULL) return root;
	if (compare(key, root->key) < 0)
		root->left = delete_node(root->left, key);
	else if (compare(key, root->key) > 0)
		root->right = delete_node(root->right, key);
	else
	{
		if (root->left == NULL)
		{
			TreeNode *temp = root->right;
			free(root);
			return temp;
		}
		else if (root->right == NULL)
		{
			TreeNode *temp = root->left;
			free(root);
			return temp;
		}

		TreeNode *temp = min_value_node(root->right);
		root->key = temp->key;
		root->right = delete_node(root->right, temp->key);
	}
	return root;
}

void help()
{
	printf("\n**** i : insert, d : delete, s : search, p : print, q : quit ****: ");
}

int main(void)
{
	char command;
	element e;
	TreeNode *root = NULL;
	TreeNode *tmp;

	do {
		help();
		command = getchar();
		switch (command)
		{
			case 'i':
				printf("단어: ");
				gets(e.word);
				getchar();
				getchar();
				printf("의미: ");
				gets(e.meaning);
				root = insert_node(root, e);
				break;
			case 'd':
				printf("단어: ");
				gets(e.word);
				root = delete_node(root, e);
				break;
			case 'p':
				display(root);
				printf("\n");
				break;
			case 's':
				printf("단어: ");
				gets(e.word);
				tmp = search(root, e);
				getchar();
				if (tmp != NULL)
					printf("의미: %s\n", e.meaning);
				break;
		}
	}while (command != 'q');
	return 0;
}
