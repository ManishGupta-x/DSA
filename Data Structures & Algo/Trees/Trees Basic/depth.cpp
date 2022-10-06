#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include "../Classes/trees.h"
using namespace std;

void depth(TreeNode <int> * root, int level ){

        if(level == 0 ){

            cout << root->data << " ";
            return;
        }    
        for (int i = 0; i < root->children.size(); i++)
        {
            depth(root->children[i], level - 1);
        }
        return;
}

int main()
{

    TreeNode<int> * root = root->TakeinputLevelwise();
    int level;
    cout << "Enter Depth or level your want to print : ";
    cin >> level;
    cout << "Elements at Level " << level << " are : ";
    depth(root, level);

    return 0;
}