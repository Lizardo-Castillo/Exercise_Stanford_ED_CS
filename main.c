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

void printNode(struct node* head){
	while(head){
		printf("Data: %d\n", head->data);
		head = head->next;
	}
}

int Length(struct node* head){
	int count = 0;
	while(head){
		count += 1;
		head = head->next;
	}
	return count;
}

int cont(strut node* head){
	int cont = 0;
	while(head){
		cont++;
		head = head -> next;
	}
	return 0;
}


int main(){
	int a = 0;
	struct node* head = BuildOneTwoThree();
	printNode(head);
	printf("Cantidad: %d\n", Length(head));
	return 0;
}
