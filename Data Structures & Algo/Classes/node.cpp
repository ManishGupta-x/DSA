#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class node
{

public:
    int data;
    node *next;
    node(int d)
    {
        data = d;
        next = NULL;
    }

};
int size_oflist(node *head){
    int size = 1;
    node *temp = head;
    while(temp -> next != NULL){
        size++;
        temp = temp->next;
    }
    return size;
}
void print(node *head){

    node *temp = head;
    
    while (temp != NULL)
    {

        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
  node *takeinput()
{

    int data;
    cin >> data;
    node *head = NULL;
    node *tail = NULL;
    while (data != -1)
    {
        node *newnode = new node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = tail->next; // or tail = newnode;
        }
        cin >> data;
    }
    return head;
}
  
