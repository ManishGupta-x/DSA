#include <bits/stdc++.h> 
#include "../../Classes/binarytree.h"
using namespace std;
BinaryTree<int> * BuildTreeHelper(int * ino , int * pre , int preS, int preE,int inS, int inE){


        
}

BinaryTree<int> * Buildtree(int * ino , int * pre , int size){

    return BuildTreeHelper(ino, pre, 0, size - 1, 0, size - 1);
}
int main(){

    int in, p,size;
    cout << "Enter Size of tree (Number of Nodes): ";
    cin >> size;
    int ino[in], pre[p];
    cout << "Enter Pre Order of the tree : ";
    for (int i = 0; i < size; i++)
    {
        cin >> ino[i];
    }

    cout << "Enter Inorder of the tree : ";

    for (int i = 0; i < size; i++)
    {
        cin >> pre[i];
    }

   // BinaryTree<int> *root = BuildTree(ino, pre, size);

    return 0;

}