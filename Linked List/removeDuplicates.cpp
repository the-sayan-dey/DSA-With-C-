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

// Remove duplicates from a sorted linked list
Node* removeDuplicateInSortedLL(Node* head){
    if(head == NULL){
        return head;
    }

    Node* temp = head;
    Node* t = head;

    while(temp != NULL && temp->next != NULL){
        if(temp->data == temp->next->data){
           t = temp->next;
           temp->next = temp->next->next;
           delete(t); 
        } else{
            temp = temp->next;
        }
    }

    return head;
}

// For removing duplicates from a unsorted list, we can first sort the linked list 

void printLL(Node* head){
    Node* temp = head;
    int count = 1;

    while(temp != NULL){
        cout<<"Value at Node: "<<count<<" is: "<<temp->data<<endl;
        temp = temp->next;
        count++;
    }
}

int main(){
    Node* head = new Node(10);

    Node* node1 = new Node(17);
    Node* node2 = new Node(27);
    Node* node3 = new Node(27);
    Node* node4 = new Node(144);
    Node* node5 = new Node(202);

    head->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = NULL;

    printLL(head);
    head = removeDuplicateInSortedLL(head);
    printLL(head);

    return 0;
}