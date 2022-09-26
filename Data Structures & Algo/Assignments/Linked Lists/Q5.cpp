/*--
Problem Statement: Even after Odd LinkedList
Problem Level: MEDIUM
Problem Description:
For a given singly linked list of integers, arrange the elements such that all the even numbers are placed after the odd numbers. The relative order of the odd and even terms should remain unchanged.
Note :
No need to print the list, it has already been taken care. Only return the new head to the list.
--*/
#include <iostream>
#include <bits/stdc++.h>
#include "../../Classes/node.cpp"
using namespace std;

node *evenodd(node *head)
{
    node *temp = head, *evenhead, *oddhead, *newhead, *temp2;
    int evenflag = 0, oddflag = 0;
    while (temp != NULL)
    {
        if (temp->data % 2 == 0 && evenflag == 0)
        {
            evenhead = temp;
            temp2 = evenhead;
            evenflag = 1;
        }
        else if (temp->data % 2 != 0 && oddflag == 0)
        {
            oddhead = temp;
            newhead = oddhead;
            oddflag = 1;
        }

        if (evenflag == 1 && oddflag == 1)
        {
            break;
        }
        if(temp ->next == NULL){

            return head;
        }
        temp = temp ->next;
        
    }
    temp = head;
    while (temp != NULL )
    {
        if (temp->data % 2 == 0)
        {
            if (evenflag == 1)
            {
                evenflag = 2;
                temp = temp->next;
                continue;
            }
            else if (evenflag == 2)
            {
                evenhead->next = temp;
                evenhead = evenhead->next;
                temp = temp->next;
            }
            
        }else if(temp->data %2 !=0){
            if (oddflag == 1)
            {
                oddflag = 2;
                temp = temp->next;
                continue;
            }
            else if (oddflag == 2)
            {
                oddhead->next = temp;
                oddhead = oddhead->next;
                temp = temp->next;
            }
            
        }
    }
    oddhead->next = temp2;
    evenhead->next = NULL;
    return newhead;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        node *head = takeinput();
        head = evenodd(head);
        print(head);
    }
    
    return 0;
}
