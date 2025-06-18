#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* next;
};
struct node* head = NULL;

void insertatbegging(int value){
	struct node* new node = (struct node*)malloc(sizeof(struct node));
	new node -> data =value;
	new node -> next =head;
	head=new node;
	
	
}

void insertatend(int value){
	struct node* new node = (struct node*)malloc(size of(struct node));
	new node -> data = value;
	new node -> next = NULL;
	
}

void delete(int value){
	
}

void display(){
	
}

int search(int value){
	
	return 0;
}

int main(){
	
	
	return 0;
}
