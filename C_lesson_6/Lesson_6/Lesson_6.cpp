// Lesson_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
// урок 6
// Савенко Вадим

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node *parent;
	struct Node *left;
	struct Node *right;

}Node;

void preOrderTravers(Node *root)
{
	if (root)
	{
		printf("%d", root->data);
		preOrderTravers(root->left);
		preOrderTravers(root->right);
	}
}

int i = 0;
int arr[] = { 5,8,7,3,0,9,1,2,4 };

Node *tree(int amount)
{
	Node *node;
	if (amount == 0)
	{
		node = NULL;
	}
	else
	{
		int value = 0;
		node = (Node*)malloc(sizeof(Node));
		node->data = value;
		node->left = tree(amount / 2);
		node->right = tree(amount - amount / 2);

	}
	return node;
}


int Hush(char *stroka)
{
	int temp=0;
	while (*stroka) {
		temp+= *stroka; 
		++stroka;
	}
	return temp;

}

int main()
{
	char  stroka[] = "abcd";
	printf("%d",Hush(stroka));
	getchar();
	return 0;
}
