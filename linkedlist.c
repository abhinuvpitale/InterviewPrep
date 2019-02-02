#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int val;
	struct node *next;
} node;

node* insert(node* head)
{
	node *temp = head;
	while(temp->next)
		temp = temp->next;
	node *new = (node*)malloc(sizeof(node));
	temp->next = new;
	new->next = NULL;
	scanf("%d",&new->val);
	return head;
}

void print(node* head)
{
	while(head)
	{
		printf("%d \n",head->val);
		head = head->next;
	}
}

int main()
{
	node* head = (node*)malloc(sizeof(node));
	node* first =  head;
	scanf("%d",&head->val);
	head->next = NULL;
	print(head);
	head = insert(head);
	print(head);
	return 0;
}
