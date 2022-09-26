//Check if list is a pallindrome
#include <iostream>
#include <bits/stdc++.h>
#include  "../../Classes/node.cpp"

using namespace std;
node * copylist(node *head){

    node *temp = head;
    node *chead = NULL;
    node *ctail = NULL;
    while (temp != NULL)
    {
         node *newnode = new node(temp ->data);
          if (chead == NULL)
        {
            chead = newnode;
            ctail = newnode;
        }
        else
        {
            ctail->next = newnode;
            ctail = ctail->next; // or tail = newnode;
        }
        temp = temp->next;

    }
    return chead;
}
node *reversell(node *head){

    if(head == NULL || head ->next == NULL){

        return head;
    }
    node * newhead = reversell(head->next);


    node *tail = head->next;
    tail->next = head;
    head->next = NULL;
    return newhead;
}
void check_palindrome(node *head){

    node *reversehead = copylist(head);
    reversehead = reversell(reversehead);
    int flag = 0;
    while (head ->data == reversehead->data){
        head = head->next;
        reversehead = reversehead->next;
        if(head==NULL){
            flag = 1;
            break;
        }
    }
    if(flag==1){
        cout << "true";
    }else 
    cout << "false";

}



int main() 
{

    
   
    int t;
    cin >> t;
    while(t--){
            
             node *head = takeinput();   
             check_palindrome(head);
             
             
    }
    return 0;
}
