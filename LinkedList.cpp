#include <iostream>
using namespace std;

struct linked_list
{
    int num;
    struct linked_list* next;
};

void insert(struct linked_list *head, int value)
{
    struct linked_list *temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    struct linked_list *new_node = (struct linked_list*)malloc(sizeof(struct linked_list));
    temp->next = new_node;
    new_node->next = NULL;
    new_node->num = value;
}
void display(struct linked_list *head)
{
    struct linked_list *temp = head;
    while(temp != NULL)
    {
        cout << temp->num << "->";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int search(struct linked_list *head, int value)
{
    struct linked_list *temp;
    temp = head;
    int pos = 0;
    while(temp!=NULL)
    {
        if(temp->num == value)
        {
            return pos;
        }
        temp = temp->next;
        pos++;
    }
    return -1;
}

int find_nth_last_element(struct linked_list *head,int n)
{
    struct linked_list *first_pntr = head;
    struct linked_list *second_pntr = head;
    int i;
    for(i = 0;i < n;i++)
    {
        if(first_pntr != NULL)
            first_pntr = first_pntr->next;
        else
            return second_pntr->num;
    }
    while(first_pntr!=NULL)
    {
        first_pntr = first_pntr->next;
        second_pntr = second_pntr->next;
    }
    return second_pntr->num;
}
int main() {
	// your code goes here
	struct linked_list* l1 = (struct linked_list*)malloc(sizeof(struct linked_list));
	l1->next = NULL;
	l1->num = 1;
	insert(l1,12);
	insert(l1,41);
	insert(l1,43);
	insert(l1,13);
	display(l1);
	int a = find_nth_last_element(l1,9);
	cout <<"Second Last element is" <<a;
	
	return 0;
}
