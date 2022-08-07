#include <bits/stdc++.h>
using namespace std;

struct node
{
    int val;
    node * next;
    node * previous;
};

void CreateNode(node *& sll, int value)
{
    node * newnode = new node();
    newnode->val = value;
    newnode->next = NULL;
    newnode->previous = sll;
    sll = newnode;
}

void InsertFirst(node *& sll, int value)
{
    node * newnode = new node();
    newnode->val = value;
    newnode->next = sll;
    newnode->previous = sll;
    sll = newnode;
}

void InsertLast(node *& sll, int value)
{
    node * temp = sll;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    node * newnode = new node();
    newnode->val = value;
    newnode->next = NULL;
    newnode->previous = temp;
    temp->next = newnode;
}

void deleteNode(node *& sll)
{
    node * temp = sll->next;
    temp->previous = sll;
    delete sll;
    sll = temp;
}

void deleteNode(node *& sll, int value)
{
    node * start = sll;
    node * end = NULL;
    while(start)
    {
        if(start->val == value)
        {
            end->next = start->next;
            node * temp = start->next;
            temp->previous = end;
            delete start;
            break;
        }
        end = start;
        start = start->next;
    }        
}


void print(node *& sll)
{
    node * temp = sll;
    while(temp)
    {
        cout<<temp->val<<" -> ";
        temp = temp->next;
    }
    cout<<endl;

}


int main()
{
    node * test = NULL;
    CreateNode(test, 10);
    InsertFirst(test, 20);
    InsertLast(test, 30);
    print(test);
    deleteNode(test,10);
    print(test);
}

