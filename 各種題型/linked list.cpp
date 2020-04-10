#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct listnode 
{
    int data;
    struct listnode *next;
};
typedef struct listnode ListNode;

void print_linked_list(ListNode *head)
{
    for(; head != NULL; head = head->next)
        printf("data = %d\n", head->data);
}

ListNode *insert_linked_list(ListNode *head,int data)
{
    ListNode *current = (ListNode *) malloc(sizeof(ListNode));
    ListNode *ptr;
    ListNode *last;
    assert(current != NULL);
    current->data = data;
    if(head == NULL) 
	{
        current->next = NULL;
        return(current);
    }
    last = NULL;
    ptr = head;
    while(ptr != NULL && ptr->data < data)
	{
        last = ptr;
        ptr = ptr->next;
    }
    if(last == NULL)
	{
        current->next = head;
        return(current);
    }
    else
	{
        current->next = last->next;
        last->next = current;
        return(head);
    }
}

int main(void)
{
    int j;
    ListNode *head = NULL;
	while(scanf("%d",&j) != EOF)
	{
        head = insert_linked_list(head, j);
    	print_linked_list(head);
	}
    return 0;
}
