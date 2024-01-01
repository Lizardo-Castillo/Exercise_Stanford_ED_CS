#include <stdlib.h>
#include <stdio.h>

struct node{
	int data;
	struct node* next;
};

struct node* BuildOneTwoThree(){
	struct node* head = malloc(sizeof(struct node));
	struct node* second = malloc(sizeof(struct node));
	struct node* third = malloc(sizeof(struct node));

	head->data = 1;
	head->next = second;

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = NULL;

	return head;
}

void printNode(struct node* example){
	struct node* temp = malloc(sizeof(struct node));
	temp = example;
	while(temp->data != NULL){
		printf("Data: %d\n", temp->data);
		temp = temp->next;

	}
}
int main(){
	struct node* head = BuildOneTwoThree();
	printNode(head);
	return 0;
}
