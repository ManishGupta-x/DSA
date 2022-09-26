/*--
Problem Statement: Delete every N nodes
Problem Level: MEDIUM
Problem Description:
You have been given a singly linked list of integers along with two integers, 'M,' and 'N.' Traverse the linked list such that you retain the 'M' nodes, then delete the next 'N' nodes. Continue the same until the end of the linked list.
To put it in other words, in the given linked list, you need to delete N nodes after every M nodes.
Note :
No need to print the list, it has already been taken care. Only return the new head to the list.
--*/
#include <iostream>
#include <bits/stdc++.h>
#include "../../Classes/node.cpp"
using namespace std;

node *deletenode(node *head, int m, int n)
{

    int index = 1, linknode = 1;
    node *temp = head->next, *newhead = head;
    int size = size_oflist(head);
    while (index < size)
    {
        if(temp == NULL){
            break;
        }
        if ((index + n ) % (m+n) == 0)
        {
            linknode = 0;
            index++;
            temp = temp->next;
            continue;
        }else if (index % (m + n) == 0 )
        {

            linknode = 1;
            newhead->next = temp;
            newhead = newhead->next;
            temp = temp->next;
            index++;
            continue;
                  
        }else if(linknode == 0){
            
            temp = temp->next;
            index++;
           
        }
        if (linknode == 1)
        {   
            
            newhead->next = temp;
            newhead = newhead->next;
            index++;
            temp = temp->next;
        }
        
    }
    newhead->next = NULL;
    return head;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        node *head = takeinput();
        int m, n;
        cin >> m >> n;
        if(n==0){
            print(head);
        }else if(m==0 && n!=0){
            cout << -1;
        }else{
           head = deletenode(head, m, n);
           print(head);
        }
       
    }

    return 0;
}



/* ------------------------------------shivi's-----------------------------------------------*/
// node* delete_n(node*head,int M,int N){
//     node*temp=head;
//     if(N==0){
//         return head;
//     }   
//     int count=M-1;
//     if(head==NULL){
//         return head;
//     }
//     while(count--){
//         if(temp->next==NULL || temp==NULL){
//             return head;
//         }
//         temp=temp->next;
//     }
//      node* del=temp->next;
//      int dele=N-1;
//      if(del==NULL){
//         temp->next=NULL;
//         return head;
//      }
//      while (dele--)
//      {
//         if(del->next==NULL || del==NULL){
//             temp->next=NULL;
//             return head;
//         }
//          del=del->next;
//      }
     
//     temp->next=delete_n(del->next,M,N);
//     return head;
// }
/*==========================================================================================*/