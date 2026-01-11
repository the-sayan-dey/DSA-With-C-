#include<iostream>
#include<queue>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;

        Node(int d){
            this -> data = d;
            this -> left = NULL;
            this -> right = NULL;
        }
};

int heightOfBinaryTree(Node *node){
    if(node == NULL){
        return 0;
    }

    int leftSubtreeHeight = heightOfBinaryTree(node -> left);
    int rightSubtreeHeight = heightOfBinaryTree(node -> right);

    int ans = max(leftSubtreeHeight, rightSubtreeHeight) + 1;

    return ans;
}

int main() {
    /*
            1
           / \
          2   3
         / \
        4   5

    Height of this tree = 3
    */

    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    int height = heightOfBinaryTree(root);

    cout << "Height of Binary Tree: " << height << endl;

    return 0;
}
