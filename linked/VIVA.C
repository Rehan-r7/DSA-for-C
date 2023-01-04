/*wap to merge two singly link list with one commom element*/
//wap to remove redundancy in an array
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node1
{
	struct node1* next;
	int item;
};
struct node2
{
	struct node2* next;
	int item;
};
typedef struct node1 Node1;
typedef struct node1 Node2;

Node1* start1=NULL;
Node2* start2=NULL;

void Insert1(int data)
{
	Node1* ptr;
	ptr=(Node1*)malloc(sizeof(Node1));
	ptr->item=data;
	if(start1==NULL)
	{
		start1=ptr;
		ptr->next=NULL;
	}
	else
	{
		ptr->next=start1;
		start1=ptr;
	}


}
void Insert2(int data)
{
	Node2* ptr;
	ptr=(Node2*)malloc(sizeof(Node2));
	ptr->item=data;
	if(start1==NULL)
	{
		start2=ptr;
		ptr->next=NULL;
	}
	else
	{
		ptr->next=start2;
		start2=ptr;
	}


}
void Merge()
{
	Node1* temp1;
	Node1* trav;
	Node2* temp2;
	temp1=start1;
	temp2=start2;
	while(temp1!=NULL)
	{
		temp1=temp1->next;
	}
	temp1=start2;
	while(temp1!=NULL)
	{
	temp1=temp2->next;
	}
	trav=start1;
	printf("Merged link list : -\n");
	while(trav!=NULL)
	{
		printf("%d->",trav->item);
		trav=trav->next;

	}

}
void display()
{
	int i;
	Node1* temp1;
	Node2* temp2;
	temp1=start1;
	temp2=start2;
	printf("1-link list \n");
	if(start1==NULL)
	{
		printf("List is Empty");
	}
	else
	{
	 while(temp1!=NULL)
	{
	printf("%d->",temp1->item);
	temp1=temp1->next;
	}
	}
	printf("\n2-link list \n");
	if(start2==NULL)
	{
		printf("List is Empty");
	}

	else{
	while(temp2!=NULL)
	{
	printf("%d->",temp2->item);
	temp2=temp2->next;
	}
	}




}

void main()
{
	int ch1,data,ch2;
	char user;
	clrscr();

	do{
	display();
	printf("\nOPTIONS :- \n");
	printf("1.(1)link list\n2.(2)link list\n3.Merge\n4.EXIT");
	printf("\nChoose any option : ");
	scanf("%d",&ch1);

	switch(ch1)
	{
	 case 1 :  printf("\n");
		   printf("INSERT AN ELEMENT : ");
		   scanf("%d",&data);
		   Insert1(data);
		   break;


	 case 2 : printf("\n");
		   printf("INSERT AN ELEMENT : ");
		   scanf("%d",&data);
		   Insert2(data);
	   break;
	 case 3 : Merge();
		break;
	 case 4 : exit(0);
		break;
	 default : printf("Please enter correct option !");
		break;
	}
	printf("Do you want to continue : ");
	fflush(stdin);
	scanf("%c",&user);
       }while(user=='Y' || user=='y');
       getch();
}