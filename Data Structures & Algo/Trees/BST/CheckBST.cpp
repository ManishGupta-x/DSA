#include <bits/stdc++.h> 
#include "../../classes/binarytree.h"
using namespace std;

class isBSTreturn
{

public:
    bool isBST;
    int maximum;
    int minimum;
};

isBSTreturn isBST(BinaryTree<int> * root){


        if(root == NULL){

            isBSTreturn output;
            output.isBST = true;
            output.maximum = INT_MIN;
            output.minimum = INT_MAX;
            return output;
        }

        isBSTreturn leftoutput = isBST(root->left);
        isBSTreturn rightoutput = isBST(root->right);

        int minimum = min(root->data, min(leftoutput.minimum, rightoutput.minimum));
        int maximum = max(root->data, max(leftoutput.maximum, rightoutput.maximum));
        bool isBSTfinal = (root->data < rightoutput.minimum) && (root->data > leftoutput.maximum) && leftoutput.isBST && rightoutput.isBST;
        isBSTreturn output;
        output.isBST = isBSTfinal;
        output.maximum = maximum;
        output.minimum = minimum;
        return output;
}

int main(){

    BinaryTree<int> *root = root->TakeinputLevelwise();
    isBSTreturn finaloutput = isBST(root);
    if(finaloutput.isBST){

        cout << " Its a BST ";
    }else
    {
        cout << "Its Not a BST";
    }
    
    return 0;

}