#include <bits/stdc++.h>
#include "../../Classes/binarytree.h"
using namespace std;

void printbetweenk1k2(BinaryTree<int> *root, int k1, int k2)
{

    if (root == NULL)
    {

        return;
    }
    if (root->data >= k1 && root->data <= k2)
    {

        cout << endl;
        cout << root->data << " ";
    }
    if (root->data > k1)
    {

        printbetweenk1k2(root->left, k1, k2);
    }
    if (root->data <= k2)
    {

        printbetweenk1k2(root->right, k1, k2);
    }
}
int main()
{

    BinaryTree<int> *root = root->TakeinputLevelwise();
    printbetweenk1k2(root, 20, 60);
    return 0;
}