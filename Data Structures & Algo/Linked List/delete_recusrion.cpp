#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include "..\Classes\node.cpp"
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
    node *head;
    head = takeinput();
    head = del_recurion(head, 2);
    print(head);
    return 0;
}
