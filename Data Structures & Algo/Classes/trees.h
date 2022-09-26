#include <bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode
{

public:
    T data;
    vector<TreeNode<T> *> children;

    TreeNode(T data)
    {

        this->data = data;
    }

    TreeNode<int> *TakeinputLevelwise()
    {

        int rootdata;
        cout << "Enter root data : " ;
        cin >> rootdata;
        TreeNode<int> *root = new TreeNode<int>(rootdata);
        queue<TreeNode<int> *> pendingNodes;
        pendingNodes.push(root);
        while (pendingNodes.size() != 0)
        {
            TreeNode<int> *front = pendingNodes.front();
            pendingNodes.pop();
            cout << "Enter No of children of  " << front->data << " : ";
            int numchild;
            cin >> numchild;
            for (int i = 0; i < numchild; i++)
            {
                int childdata;
                cout << "Enter  " << i + 1 << "th child of  " << front->data <<" : ";
                cin >> childdata;
                TreeNode<int> *child = new TreeNode<int>(childdata);
                front->children.push_back(child);
                pendingNodes.push(child);
            }
        }

        return root;
    }

    void PrintTree(TreeNode<int> *root)
    {

        if (root == NULL)
        {
            return;
        }
        cout << root->data << " : ";
        for (int i = 0; i < root->children.size(); i++)
        {
            cout << root->children[i]->data << ",";
        }
        cout << endl;
        for (int i = 0; i < root->children.size(); i++)
        {
            PrintTree(root->children[i]);
        }
    }
};

// Way 1 : Not User Friendly for taking inputs
//------------------------------------------------------------------------------------------------//

/* TreeNode <int> * takeinput(){

    int rootdata;
    cout << "Enter Root Data \n";
    cin >> rootdata;
    TreeNode<int> *root = new TreeNode<int>(rootdata);
    int n;
    cout << " Enter no of children of " << rootdata;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        TreeNode<int> *child = takeinput();
        root->children.push_back(child);
    }
    return root;
} */
//------------------------------------------------------------------------------------------------//
// Way 2 : Efficient and User friendly
