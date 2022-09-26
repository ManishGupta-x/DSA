/*--
Problem Statement: Eliminate duplicates from LL
Problem Level: EASY
Problem Description:
You have been given a singly linked list of integers where the elements are sorted in ascending order. 
Write a function that removes the consecutive duplicate values such that the given list only contains unique elements and 
returns the head to the updated list.
Sample Input 1 :
1
1 2 3 3 4 3 4 5 4 5 5 7 -1
Sample Output 1 :
1 2 3 4 3 4 5 4 5 7
--*/
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include "../../Classes/node.cpp"
using namespace std;
node *del_recurion(node *head, int i)
{

    if (i == 0)
    {
        node *temp = head->next;
        delete head;
        head = temp;
        return head;
    }
    node *newhead = del_recurion(head->next, i - 1);
    head->next = newhead;
    return head;
}

int main() 
{
    
    int t;
    cin >> t;
    while(t--){
        node *head;
        head = takeinput();
        node * temp = head;
        while (temp ->next !=NULL && temp !=NULL)
        {
            if(temp ->data == temp ->next->data){

                temp = del_recurion(temp,1);
                
            }
            temp = temp->next;
        }
        print(head);
        }
  

    return 0;

}
