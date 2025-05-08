#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int value, Node* nextNode = nullptr){
        data = value;
        next = nextNode;
    }
};

class LinkedList{
private:
    Node* head;
    

public:
    LinkedList(){
        head = nullptr;
    }
    Node* getHead() {
        return head;
    }
    

    void insertAtBeginning(int value){
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(int value){
        Node* newNode = new Node(value);
        if(head == nullptr){
            head = newNode;
            return;
        }
        Node* temp = head;
        while(temp->next != nullptr)
            temp = temp->next;
        temp->next = newNode;
    }

    void insertAfter(Node* current, int value){
        Node* tmp = new Node(value, current->next);
        current->next = tmp;
    }

    void deleteValue(int value){
        Node* temp = head;
        Node* prev = nullptr;

        if(temp != nullptr && temp->data == value){
            head = temp->next;
            delete temp;
            return;
        }
        while(temp != nullptr && temp->data != value){
            prev = temp;
            temp = temp->next;
        }
        if (temp == nullptr)
            return;
        prev->next = temp->next;
        delete temp;
    }

    void printList(){
        Node* temp = head;
        while (temp != nullptr){
            cout << temp->data << " ->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
   }

~LinkedList(){
    Node* temp;
    while(head != nullptr){
        temp = head;
        head = head->next;
        delete temp;
    }
}
};
int main(){
    LinkedList list;

    list.insertAtBeginning(10);
    list.insertAtBeginning(15);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.printList();
    
    Node* temp = list.getHead();
    while(temp != nullptr && temp->data != 15){
        temp = temp->next;
    }
    if(temp != nullptr)
        list.insertAfter(temp,56);
        
    list.deleteValue(10);
    list.printList();

    return 0;
}


