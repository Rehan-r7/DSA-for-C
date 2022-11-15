#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Case 1: Deleting the first element from the linked list
struct Node * deleteFirst(struct Node * head){
    struct Node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

// Case 2: Deleting the element at a given index from the linked list
struct Node * deleteAtIndex(struct Node * head, int index){
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }
    
    p->next = q->next;
    free(q);
    return head;
}

// Case 3: Deleting the last element
struct Node * deleteAtLast(struct Node * head){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->next !=NULL)
    {
        p = p->next;
        q = q->next;
    }
    
    p->next = NULL;
    free(q);
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    int num,choice;
    char ch;
    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 4;
    head->next = second;

    // Link second and third nodes
    second->data = 3;
    second->next = third;

    // Link third and fourth nodes
    third->data = 8;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 1;
    fourth->next = NULL;

    printf("Linked list before deletion\n");
    linkedListTraversal(head);

    printf("        MENU        \n");
    printf("*DELETION :-\n1.Beginning\n2.END\n3.Specific position\n4.exit\n");
    do
    {   printf("Please enter your choice : ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1 : head = deleteFirst(head);break;
        case 2 : head = deleteAtIndex(head, 2);break;
        case 3 : head = deleteAtLast(head);break;
        case 4 : exit(0);break;
        
        default: printf("Invalid choice!");
            break;
        }
        // head = deleteFirst(head); // For deleting first element of the linked list
        // head = deleteAtIndex(head, 2);
       printf("Linked list after deletion\n");
    linkedListTraversal(head);
    printf("Do you wish to continue press y/Y : ");
    fflush(stdin);
    scanf("%c",&ch);
    } while (ch=='y'|| ch=='Y');
        
    return 0;
}
