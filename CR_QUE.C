//Circular queue implementation by using array
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5
int queue[MAX];
int rear=-1;
int front=-1;
int item;
void enqueue(int);
void dequeue();
void display();

void enqueue(int x)
{
	if(front==(rear+1)%MAX)
	{
	     printf("Queue is full !");
	}
	else
	{
		if(front==-1)
		{
			front=0;
		}
		rear=(rear+1)%MAX;
		//item=x;
		queue[rear]=x;
	}

}
void dequeue()
{
	if(front==-1)
	{
		printf("Queue is empty");
	}
	else
	{
		item=queue[front];
		//front+=1;

		if(front==rear)
		{
			front=rear=-1;
		}
		else
		front=(front+1)%MAX;

	}
}
void display()
{
	int i;
	if(rear==-1)
	{
		printf("Queue is empty");
	}
	else
	{
		for(i=front;i!=rear;i=(i+1)%MAX)
		{
			printf("%d-> ",queue[i]);
		}
		printf("%d",queue[i]);
	}
}
void main()
{
	int choice,a;
	char ch;
	clrscr();

	printf("     MENU    \n");
	printf("1.Enqueue\n2.Dequeue\n3.Display\n4.EXIT");
	do{
		printf("Please enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
		  case 1 : printf("Enter a element to add : ");
			   scanf("%d",&a);
			   enqueue(a);
			   break;
		  case 2 : dequeue();
			   break;
		  case 3 : display();
			   break;
		  case 4 : exit(0);
			   break;
		}
		fflush(stdin);
		printf("\nDo you wish to continue press y/Y : ");
		scanf("%c",&ch);
	}while(ch=='y'||ch=='Y');


	getch();
}
