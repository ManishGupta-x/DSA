#include <bits/stdc++.h>
using namespace std;
template <typename T>
class BinaryTree
{

public:
    T data;
    BinaryTree<int> *left= NULL;
    BinaryTree<int> *right= NULL;
    BinaryTree(T data)
    {

        this->data = data;
    }

    BinaryTree<int> *TakeinputLevelwise()
    {

        queue<BinaryTree<int> *> pendingNodes;
        int rootData;
        cout << "Enter Root Data : ";
        cin >> rootData;
        if (rootData == -1)
        {
            return NULL;
        }
        BinaryTree<int> *root = new BinaryTree<int>(rootData);
        pendingNodes.push(root);
        while (pendingNodes.size() != 0)
        {
            BinaryTree<int> *front = pendingNodes.front();
            pendingNodes.pop();
            cout << "Enter Left child of " << front->data << " : ";
            int leftchild;
            cin >> leftchild;
            if (leftchild != -1)
            {

                BinaryTree<int> *child = new BinaryTree<int>(leftchild);
                front->left = child;
                pendingNodes.push(child);
            }

            cout << "Enter right child of " << front->data << " : ";
            int rightchild;
            cin >> rightchild;
            if (rightchild != -1)
            {

                BinaryTree<int> *child = new BinaryTree<int>(rightchild);
                front->right = child;
                pendingNodes.push(child);
            }
        }
        return root;
    }

    void printTree(BinaryTree<int> *root)
    {

        queue<BinaryTree<int> *> pendingNodes;
        pendingNodes.push(root);
        while (pendingNodes.size() != 0)
        {
            BinaryTree<int> *front = pendingNodes.front();
            pendingNodes.pop();
            cout << endl;
            cout << front->data << " : ";
            if (front->left != NULL)
            {

                cout << " L" << front->left->data;
                pendingNodes.push(front->left);
            }
            if (front->right != NULL)
            {

                cout << " R" << front->right->data;
                pendingNodes.push(front->right);
            }
           
        }
    }

    ~BinaryTree(){

        delete left;
        delete right;
    }
};
