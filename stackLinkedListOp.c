#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *ptr;
struct node *head;

void push();
void pop();
void display();

int main()
{
	
	int choice;
	printf("******STACK OPERATIONS USING LINKED LIST******");
	printf("\n1.Push");
	printf("\n2.Pop");
	printf("\n3.Display");
	printf("\n4.Exit");
	
	
	
	//loop for menu
	
	do
	{
		printf("\n\nEnter choice (1-4): ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: push();
				break;
			
			case 2: pop();
				break;
				
			case 3: display();
				break;
				
			case 4: printf("Exit");
				break;
				
			default: printf("Choose a valid option (1-4)!!!"); 
		}
	}
	while(choice!=4);
	return 0;
	
	
}
void push()
{
	printf("\n\t***Stack Push Operation - insertion***");
	int x,n=0;
	printf("\nEnter element to be inserted: ");
	scanf("%d",&x);
	struct node *temp;
	temp=malloc(sizeof(struct node));
	temp->data=x;
	
	if(head==NULL)
	{
		temp->next=NULL;
		head=temp;
	}
	else
	{
		temp->next=head;
		head=temp;
	}
	printf("Element pushed successfully\n");
   
}
void pop()
{
	printf("\n\t***Stack Pop Operation - deletion***");
	if(head==NULL)
	{
		printf("Underflow!!!Deletion not possible");
	}
	else
	{
		ptr=head;
		head=head->next;
		free(ptr);
		printf("\nElement deleted successfully!!!\n");
	}
	
}
void display()
{
    ptr=head;
    if(ptr==NULL)
    {
        printf("\nList empty");
    }
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
}

