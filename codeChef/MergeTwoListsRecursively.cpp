#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    struct node *bottom;
};
typedef struct node Node;


Node * mergeTwoLists(Node* a, Node* b) 
{
    Node *head;
    
    if(!a)
        return b;
    if(!b)
        return a;
    if(a->data <= b->data)
    {
        head = a;
        head->bottom = mergeTwoLists(a->bottom, b);
    }
    else
    {
        head = b;
        head->bottom = mergeTwoLists(a, b->bottom);
    }
    return head;
}

int main()
{
    Node *a, *b, *head, *temp;
    a = NULL;
    b = NULL;
    
    for(int i = 1; i < 10; i++)
    {
        Node *newNode;
        newNode = new Node;
        newNode->data = i;
        newNode->bottom = NULL;
        
        if(a == NULL)
            a = newNode;
        else
            temp->bottom = newNode;
        temp = newNode;
    }

    temp = a;    
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->bottom;
    }
    cout<<endl;

    for(int i = 6; i < 13; i++)
    {
        Node *newNode;
        newNode = new Node;
        newNode->data = i;
        newNode->bottom = NULL;
        
        if(b == NULL)
            b = newNode;
        else
            temp->bottom = newNode;
        temp = newNode;
    }
    
    temp = b;    
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->bottom;
    }
    cout<<endl;

    head = mergeTwoLists(a, b);
    temp = head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->bottom;
    }
    cout<<endl;
    
    return 0;
}