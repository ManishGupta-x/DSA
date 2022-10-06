#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include "../Classes/trees.h"
using namespace std;

int heightoftree(TreeNode <int> *root){
    int height = 0;
    for (int i = 0; i < root->children.size(); i++)
    {
        height = max(height, heightoftree(root->children[i]));
    }
    return height + 1;
}

int main()
{

    TreeNode<int> * root = root->TakeinputLevelwise();
    int heightOfTree = heightoftree(root);
    cout << "Height of tree : " << heightOfTree;
    return 0;
}
