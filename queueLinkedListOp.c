#include <stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *ptr;
struct node *ptr1;
struct node *temp;
struct node *front;
struct node *rear;

void enqueue();
void dequeue();
void display();

int main()
{
    int choice;
    printf("******QUEUE OPERATIONS******");
	printf("\n1.Enqueue");
	printf("\n2.Dequeue");
	printf("\n3.Display");
	printf("\n4.Exit");
	

	do
	{
		printf("\n\nEnter choice (1-4): ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: enqueue();
				break;
			
		    case 2: dequeue();
				break;
				
			case 3: display();
				break;
			
			case 4: printf("\nExit"); 
				break;
				
			default: printf("Choose a valid option (1-3)!!!"); 
		}
	}
	while(choice!=4);
	return 0;

}

void enqueue(){
    int x;
    printf("\nEnter element to be inserted: ");
    scanf("%d",&x);
    temp=malloc(sizeof(struct node));
    
    if(temp==NULL)
    {
        printf("\nOverflow!!!");
        return;
    }
    else
    {
        temp->data=x;
        if(front==NULL)
        {
            front=temp;
            rear=temp;
            front->next=NULL;
            rear->next=NULL;
        }
        else
        {
            rear->next=temp;
            rear=temp;
            rear->next=NULL;
        }
        
    printf("\n\nElement inserted successfully!!!");
    }
    
}
void dequeue(){
    
    if(front==NULL)
    {
        printf("\nUnderflow!!!");
        return;
    }
    else
    {
        temp=front;
        front=front->next;
        free(temp);
        printf("\n\nElement deleted successfully!!!");
    }
}
void display(){
     ptr=front;
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