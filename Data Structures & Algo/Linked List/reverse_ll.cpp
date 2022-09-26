#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include "..\Classes\node.cpp"
using namespace std;
class Pair
{

public:
    node *head;
    node *tail;
};
 
Pair reverseLL(node *head){
    if(head ==NULL || head ->next == NULL){
        Pair ans;
        ans.head = head;
        ans.tail = head;
        return ans;
    }
    Pair smallAns = reverseLL(head->next);
    smallAns.tail->next = head;
    head->next = NULL;
    Pair ans;
    ans.head = smallAns.head;
    ans.tail = head;
    return ans;
}
node * reversepair(node *head){

    return reverseLL(head).head;
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
int main() 
{
    node *head;
    head = takeinput();
    head = reversepair(head); // or head = reversell(head);
    print(head);

    return 0;

}
