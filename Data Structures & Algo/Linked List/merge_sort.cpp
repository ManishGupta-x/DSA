#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include "..\Classes\node.cpp"
using namespace std;
node *midnode(node *head)
{

    node *slow = head;
    node *fast = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

node *merge(node *head1, node *head2)
{

    node *finalhead = NULL;
    node *finaltail = NULL;
    if (head1->data < head2->data)
    {
        finalhead = head1;
        finaltail = head1;
        head1 = head1->next;
    }
    else
    {
        finalhead = head2;
        finaltail = head2;
        head2 = head2->next;
    }
    while (head1 != NULL && head2 != NULL)
    {

        if (head1->data < head2->data)
        {
            finaltail->next = head1;

            head1 = head1->next;
        }
        else
        {
            finaltail->next = head2;

            head2 = head2->next;
        }
        finaltail = finaltail->next;
    }
    if (head1 == NULL)
    {
        finaltail->next = head2;
    }
    else if (head2 == NULL)
    {
        finaltail->next = head1;
    }

    return finalhead;
}
node *merge_sort(node *head)
{

    node *mid = midnode(head);
    if (head -> next == NULL)
    {
        return head;
    }
    node *list1 = merge_sort(mid->next);
    mid->next = NULL;
    node *list2 = merge_sort(head);
    node *finalhead = merge(list1, list2);
    return finalhead;
}

int main()
{
    node *head;

    head = takeinput();
    head = merge_sort(head);
    print(head);
    

    return 0;
}
