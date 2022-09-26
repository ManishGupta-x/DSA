/*--
Problem Statement: AppendLastNToFirst
Problem Level: EASY
Problem Description:
You have been given a singly linked list of integers along with an integer 'N'. 
Write a function to append the last 'N' nodes towards the front of the singly linked list and 
returns the new head to the list.

SAMPLE INPUT 
1
1 2 3 4 5 -1
3 

Sample Output 1 :
3 4 5 1 2
--*/

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include "../../Classes/node.cpp"
using namespace std;

node * append(node *head , int n){
    int size = 1;
    node *temp = head;
    while(temp -> next != NULL){
        size++;
        temp = temp->next;
    }
    temp->next = head;
    int a = size;
    temp = head;
    node *newhead;
    while ((a - n) != 1  ){
        temp = temp->next;
        a--;
    }
    newhead = temp->next;
    temp->next = NULL;
    return newhead;
}
int main() 
{
    int t;
    cin>>t;
    while(t--){
        node *head = takeinput();
        int n;
        cin >> n;
        head = append(head, n);
        print(head);
    }
    return 0;

}
