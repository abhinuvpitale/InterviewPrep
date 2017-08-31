int find_nth_last_element(struct linked_list *head,int n)
{
    struct linked_list *first_pntr = head;
    struct linked_list *second_pntr = head;
    int i;
    for(i = 0;i < n;i++)                      // Progress in the linked list by n positions
    {
        if(first_pntr != NULL)
            first_pntr = first_pntr->next;
        else
            return second_pntr->num;          // If n elements dont exist return the first element
    }
    while(first_pntr!=NULL)                   // Progress both the pointers, the second pointer will lag by n positions
    {
        first_pntr = first_pntr->next;
        second_pntr = second_pntr->next;
    }
    return second_pntr->num;
}
