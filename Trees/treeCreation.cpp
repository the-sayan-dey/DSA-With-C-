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

Node* buildTree(Node* root){
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;

    root = new Node(data);

    // For signifying leaf node.
    if(data == -1){
        return NULL;
    }

    cout<<"Enter data for inserting into the left child "<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting into the right child "<<endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(Node *root){
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node *temp = q.front();
        cout<<temp -> data <<" ";
        q.pop();

        if(temp -> left){
            q.push(temp -> left);
        }

        if(temp -> right){
            q.push(temp -> right);
        }
    }
}

void inorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    inorder(root->left);
    cout << root-> data << " ";
    inorder(root->right);

}

void preorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    cout << root-> data << " ";
    preorder(root->left);
    preorder(root->right);

}

void postorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root-> data << " ";

}

int main(){
    Node *root = NULL;
    root = buildTree(root);

    return 0;
}