#include <bits/stdc++.h> 
#include "../../Classes/binarytree.h"
using namespace std;

bool isBST(BinaryTree<int> * root , int min = INT_MIN , int max = INT_MAX){


    if(root == NULL){
        return true;
    }
    if(root->data < min || root->data > max){

        return false;
    }else{

        bool leftok = isBST(root->left, min, root->data - 1);
        bool rightok = isBST(root->right, root->data, max);
        return leftok && rightok;
    }
    
}

int main(){

    BinaryTree<int> *root = root->TakeinputLevelwise();
    bool answer = isBST(root);
    if(answer){

        cout << "Is BST";
    }else
    {
        cout << "Not BST";
    }
    
    return 0;

}