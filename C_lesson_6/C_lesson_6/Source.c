// урок 6
// Савенко Вадим

#include <stdio.h>


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
		int value;
		node = (Node*)malloc(sizeof(Node));
		node->data = value;
		node->left = tree(amount / 2);
		node->right = tree(amount - amount / 2);

	}
	return node;
}


void Hush(char *stroka)
{
	printf("%d", stroka);
}

int main()
{
	char  stroka[] = "Привет";
	Hush(stroka);
	getchar();
	return 0;
}