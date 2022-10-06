#include <iostream>
#include <bits/stdc++.h>
#include "../Classes/trees.h"
#include <vector>
using namespace std;

int countNodes(TreeNode <int> *root){
    int count = 1;
    for (int i = 0; i < root->children.size(); i++)
    {
        count += countNodes(root->children[i]);
    }
    return count;
}
int main() 
{
    TreeNode<int> *root = root->TakeinputLevelwise();
    int numNodes = countNodes(root);
    cout << "\nNumber of Nodes : " << numNodes;
    return 0;

}
