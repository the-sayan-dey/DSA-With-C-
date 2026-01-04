#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

void insertAtHead(Node* &head, int val){
    Node* temp = new Node(val);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &head, int val){
    Node* temp = new Node(val);

    Node * t = new Node(0);
    t = head;

    while(t->next != NULL){
        t = t-> next;
    }

    t->next = temp;
    temp->next = NULL;
}

void insertAtAnyPosition(Node* &head, int position, int val){
    Node* temp = new Node(val);
    Node* current = new Node(0);
    Node* prev = new Node(0);
    int count = 2;

    if(position == 1){
        insertAtHead(head, val);
        return;
    }

    prev = head;
    current = prev->next;

    while(count != position){
        current = current->next;
        count++;
    }

    prev->next = temp;
    temp->next = current;

}

void printList(Node* &head){
    Node *temp = head;

    while(temp != NULL){
        cout<<temp->data <<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node *node1 = new Node(10);
    insertAtHead(node1,11);
    insertAtHead(node1,7);

    printList(node1);

    insertAtTail(node1, 100);
    printList(node1);

    insertAtAnyPosition(node1, 2, 33);
    printList(node1);

}