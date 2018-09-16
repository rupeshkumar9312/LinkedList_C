// LinkedList_C.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

struct Node
{
	int data;
	Node * next;
};
void insert(Node **node, int value);
void printList(Node* head);


//typedef  Node* node;
//typedef Node n;


int main()
{
	Node *head = (Node*)malloc(sizeof(Node));
	//head->data = NULL;
	head->next = NULL;
	insert(&head,10);
	insert(&head,20);
	insert(&head,30);
	insert(&head,40);

/*
	Node *head = (Node *)malloc(sizeof(Node));
	Node * second = (Node *)malloc(sizeof(Node));
	Node * third = (Node *)malloc(sizeof(Node));

	head->data = 10;
	head->next = second;
	second->data = 20;
	second->next = third;
	third->data = 30;
	third->next = NULL;
	*///if (head != NULL)
	//{
	//	//printf("Memory allocated to start and address is %d",head);
	//	head->data = 10;
	//	head->next = NULL;

	//}
	printList(head);
	/*Node* current = head;
	while (current != NULL)
	{
		printf("%d --> ", current->data);
		current = current->next;
	}
	printf("NULL");*/
    //std::cout << "Hello World!\n"; 
}


void printList(Node *head)
{
	Node *current = head;
	while (current != NULL)
	{
		printf("%d --> ", current->data);
		current = current->next;

	}
	//printf("%d -->", current->next);
	printf("NULL");

}

void insert(Node **head,int value)
{
	Node *node = (Node*)malloc(sizeof(Node));
	node->data = value;
	if (*head == NULL)
	{
		*head = node;
		node->next = NULL; 
	} 
	else
	{
		node->next = *head;
		*head = node;
	}

}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
