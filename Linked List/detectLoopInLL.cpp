#include<iostream>
#include<map>
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

bool detectCycleInLL(Node* head){
    if(head == NULL){
        return false;
    }

    map<Node*, bool> visited;
    Node* temp = head;

    while (temp != NULL){
        // cycle is found
        if(visited[temp] == true){
            cout<<"Loop found at: "<<temp->data<<endl;
            return true;
        }

        visited[temp] = true;
        temp = temp->next;
    }

    cout<<"No loop is found."<<endl;

    return false;
}

// detect cycle using floyd algo - fast and slow pointer
bool floydDetectLoop(Node* head){
    if(head == NULL){
        return false;
    } 

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){
        fast = fast->next;

        if(fast != NULL){
            fast = fast->next;
        }

        slow = slow->next;

        if(slow == fast){
            return true;
        }
    }

    return false;
}

Node* floyddetectLoopWithNode(Node* head){
    if(head == NULL){
        return NULL;
    } 

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){
        fast = fast->next;

        if(fast != NULL){
            fast = fast->next;
        }

        slow = slow->next;

        if(slow == fast){
            cout<<"Present at: "<<slow->data<<endl;
            return slow;
        }
    }

    return NULL;
}

Node* getStartingNodeOftheLoop(Node* head){
    if(head == NULL){
        return NULL;
    } 

    Node* intersection = floyddetectLoopWithNode(head);
    Node* slow = head;

    while(slow != intersection){
        slow = slow->next;
        intersection = intersection->next;
    }

    return slow;
}

int main(){
    Node* head = new Node(10);

    Node* node1 = new Node(7);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);
    Node* node4 = new Node(144);
    Node* node5 = new Node(202);

    head->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    // node4->next = NULL;
    node4->next = node2;
    detectCycleInLL(head);

    if(floydDetectLoop(head)){
        cout<<"Loop detected."<<endl;
    } else {
        cout<<"Loop is not present."<<endl;
    } 

    Node* loopStart = getStartingNodeOftheLoop(head);
    cout<<"Loop started at: "<<loopStart->data<<" and its address is: "<<loopStart;


}