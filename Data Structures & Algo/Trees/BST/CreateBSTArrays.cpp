#include <bits/stdc++.h> 
#include "../../Classes/binarytree.h"
using namespace std;
BinaryTree<int> * CreateBST( int * a , int si , int ei ){

    if(si>ei){

        return NULL;
    }
    int mid = (si+ei) / 2;
    
    BinaryTree<int> *root = new BinaryTree<int>(a[mid]); 
    root->left =  CreateBST(a, si, mid - 1);
    root->right = CreateBST(a, mid + 1, ei);
    return root;
}

int main(){

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >>a[i];
    }
    
    BinaryTree<int> *root=CreateBST(a, 0,n-1);
    root->printTree(root);

    return 0;

}