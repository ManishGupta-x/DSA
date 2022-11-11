#include <bits/stdc++.h>
#include "../../Classes/binarytree.h"
#include "../../Classes/node.cpp"
using namespace std;

class headtail{
    public:
    node *head;
    node *tail;

    headtail(){

        head = NULL;
        tail = NULL;
    }
};

headtail * createLLwithBST(BinaryTree<int> * root, headtail *ht){
    if(root == NULL){
        return NULL;
    }
    headtail * left = createLLwithBST(root->left, ht);
    node * temp = new node(root->data);
    if(left->head == NULL){
        ht->head = temp;
        ht->tail = temp;
        return ht;
    }else{   
    left->tail->next = temp;
    headtail * right = createLLwithBST(root->right, ht);
    temp->next = right->head;
    right->tail->next = NULL;
    }
    return ht;
}
int main(){

    BinaryTree<int> *root = root->TakeinputLevelwise();
    headtail *ht = new headtail();
    headtail *headtail = createLLwithBST(root, ht);
    print(headtail->head);    
    return 0;

}