#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
	{
		int info;
		struct node *next;
	};
	typedef struct node Node;
	Node *start=NULL;

	void Insert_beg()
	{
		int item;
		Node *ptr;
		ptr=(Node*)malloc(sizeof(Node));
		printf("Enter item : ");
		scanf("%d",&item);
		ptr->info=item;

		if(start==NULL)
		{
			ptr->next=NULL;
			start=ptr;
		}
		else
		{
			ptr->next=start;
			start=ptr;
		}
	}
	void Insert_last()
	{
		int item;
		Node *ptr;
		Node *loc;
		printf("Enter item : ");
		scanf("%d",&item);
		ptr->info=item;

		if(start==NULL)
		{
			start=ptr;
			ptr->next=NULL;
		}
		else
		{
		       loc=start;
		       while(loc->next!=NULL)
		       {
			loc=loc->next;
		       }
		       loc->next=ptr;
		}
	}
	void Insert_spec()
	{
		int item,pos;
		int i;
		Node *ptr,*temp;
		printf("Enter item and position : ");
		scanf("%d %d",&item,&pos);
		temp=start;
		for(i=1;i<pos-1;i++)

		{
			temp=temp->next;
			if(temp==NULL)
			{
				printf("No Node exist at specified position");

			}
		}
		ptr=(Node*)malloc(sizeof(Node));
		ptr->info=item;
		ptr->next=temp->next;
		temp->next=ptr;

	}

		void display()
		{
		 Node *temp;
		 temp=start;


			if(start==NULL)
			{
				printf("Node is empty");
			}
			else{
			while(temp!=NULL)
			 {
				printf("%d->",temp->info);
				temp=temp->next;
			 }
			}
		}
	void main()
	{
		int choice;
		char ch;
		clrscr();

		do{
		printf("       MENU         \n");
		printf("1.Insertion at beginnig\n2.Insertion at last\n3.Insert at specific\n4.Display Item\n5.EXIT\n");
		printf("please enter your choice : ");
		scanf("%d",&choice);

			switch(choice)
			{
				case 1 : Insert_beg();
					break;
				case 2 : Insert_last();
					break;
				case 3 : Insert_spec();
					break;
				case 4 : display();
					break;
				case 5 : exit(0);
				default : printf("Invalid choice!");
			}
			printf("\nDo you wish to continue : ");
			fflush(stdin);
			scanf("%c",&ch);

		}while(ch=='Y' || ch=='y');

		getch();
	}