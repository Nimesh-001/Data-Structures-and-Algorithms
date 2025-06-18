#include <stdio.h>
#include <stdlib.h>
#define max 5

int queue[max];
int rear = -1;
int front = -1;

/*int isfull(){
	return ;
}

int isempty(){
	return;
}

void enqueue(int value){
	
}

void deque(){
	
}

void peek(){
	
}

void display(){
	
}
*/
int main(){
	
	int choice, value;
	
	do{
		printf("1.enque\n");
		printf("2.deque\n");
		printf("3.peek\n");
		printf("4.search\n");
		printf("5.exit");
		
		printf("enter your value: ");
		scanf("%d",&choice);
		
		switch(choice){
			case 1: 
				printf("enter the value");
				scanf("%d",&value);
				//enque(value);
				break;
				
			case 2:
			//	deque();
				break;
				
			case 3:
			//	peek();
				break;
				
			case 4:
			//	search();
				break;
				
			case 5:
				exit(0);
				break;
				
			default:
				break;			
		}
	}while(choice != 5);
	
	
	
	
	
	
	
	return 0;
}
