/*--
Problem Statement: Find a Node in Linked List
Problem Level: EASY
Problem Description:
You have been given a singly linked list of integers.
Write a function that returns the index/position of an integer data denoted by 'N' (if it exists). Return -1 otherwise.
Note :
Assume that the Indexing for the singly linked list always starts from 0.
--*/
#include <iostream>
#include <bits/stdc++.h>
#include "..\..\Classes\node.cpp"
using namespace std;

int count_call = -1; // global variable for finding node using recursion 

int findnode(node * head, int element){

    node *temp = head;
    int flag = 0,count =0;
    while( temp ->next != NULL){
            if(temp -> data == element){
                flag = 1;
                break;
            }
            count++;
            temp = temp->next;
        }
        if(flag){
            return count;
        }else{
            return -1;
        }
}

/*-------------------------------- WITH RECURSION------------------------------------*/
int findnode_recursion(node *head , int element){
    count_call++;
    if (head->data == element)
    {
        return count_call;
    }else if(head ->next == NULL){
        return -1;
    }
        int smalloutput = findnode(head->next, element);
        return smalloutput;
    }

int main() 
{
    int t;
    cin >> t;
    while(t--){

        node *head;
        head = takeinput();
        int element;
        cin >> element;
        int n = findnode_recursion(head,element);
        cout << "\n"
             << n;
        count_call = -1;
    }
    return 0;

}
