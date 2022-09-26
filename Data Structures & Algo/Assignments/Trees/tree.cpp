#include <vector>
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
        cin >> rootdata;
        TreeNode<int> *root = new TreeNode<int>(rootdata);
        queue<TreeNode<int> *> pendingNodes;
        pendingNodes.push(root);
        while (pendingNodes.size() != 0)
        {
            TreeNode<int> *front = pendingNodes.front();
            pendingNodes.pop();
        
            int numchild;
            cin >> numchild;
            for (int i = 0; i < numchild; i++)
            {
                int childdata;
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

