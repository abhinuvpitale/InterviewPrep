#include <iostream>
using namespace std;


struct bst
{
    int val;
    struct bst* left;
    struct bst* right;
};

void add_using_while(struct bst* head, int data)
{
    struct bst* node = new struct bst;
    node->left = NULL;
    node->right = NULL;
    node->val = data;
    struct bst* temp = new struct bst;
    temp = head;
    while(1)
    {
        if(temp->val >= data)
        {
            if(temp->left == NULL)
            {
                temp->left = node; 
                break;
            }
            else
                temp = temp->left;
        }
        else
        {
            if(temp->right == NULL)
            {
                temp->right = node; 
                break;
            }
            else
                temp = temp->right;
        }
        
    }
    
}

void display_inorder(struct bst* head)
{
    
    struct bst* temp = new struct bst;
    temp = head;
    
    if(temp == NULL)
        return;
    display_inorder(temp->left);
    cout<<temp->val;
    display_inorder(temp->right);
}

void display_preorder(struct bst* head)
{
    
    struct bst* temp = new struct bst;
    temp = head;
    
    if(temp == NULL)
        return;
    cout<<temp->val;
    display_preorder(temp->left);
    display_preorder(temp->right);
}

void display_postorder(struct bst* head)
{
    
    struct bst* temp = new struct bst;
    temp = head;
    
    if(temp == NULL)
        return;
    display_postorder(temp->left);
    display_postorder(temp->right);
    cout<<temp->val;
}
int main()
{
    
    
    struct bst* head = new struct bst;
    
    
    head->left = NULL;
    head->right = NULL;
    head->val = 4;
    
    
    add_using_while(head,3);
    add_using_while(head,5);
    add_using_while(head,7);
    add_using_while(head,1);
    add_using_while(head,2);
    display_inorder(head);
    cout << "\n";
    display_preorder(head);
    cout << "\n";
    display_postorder(head);
    
    
    return 0;
}
