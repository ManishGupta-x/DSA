#include <bits/stdc++.h>
#include "../../Classes/binarytree.h"
using namespace std;

BinaryTree<int> *search(BinaryTree<int> *root, int element)
{

    if (root == NULL)
    {

        return NULL;
    }

    if (root->data == element)
    {

        return root;
    }
    BinaryTree<int> *answerNode;

    if (element < root->data)
    {

        answerNode = search(root->left, element);
        return answerNode;
    }
    else if (element > root->data)
    {

        answerNode = search(root->right, element);
        return answerNode;
    }
}
int main()
{

    BinaryTree<int> *root = root->TakeinputLevelwise();
    int element;
    cout << "\nEnter element to search in BST : ";
    cin >> element;
    BinaryTree<int> *answerNode = search(root, element);
    if (answerNode != NULL)
    {

        cout << "Element Found";
    }
    else
    {
        cout << "Element Not found";
    }

    return 0;
}