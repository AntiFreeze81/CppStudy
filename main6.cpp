#include <iostream>

using namespace std;

class Node {
public:
    Node* prev;
    int data;
    Node* next;

    Node(int d) : prev(nullptr), data(d), next(nullptr){}
    ~Node() {
        prev = nullptr;
        next = nullptr;
    }
};

class DLL {
private:
    Node* head;
public:
    DLL(Node* h) : head(h){}
    void insertAtHead(int d) {
        if (head == nullptr) {
            Node* new_node = new Node(d);
            head = new_node;
        }
        else{
            Node* new_node = new Node(d);
            Node* temp_head = head;
            new_node->next = temp_head;
            temp_head->prev = new_node;
            head = new_node;
        }
    }

    void printHead() {
        if (head == nullptr) {
            cout << "Head is NULL" << endl;
        }
        else {
            cout << head->data << endl;
        }
    }

    void deleteNode(Node* target) {
        if (target == nullptr) {
            cout << "target node is nullptr" << endl;
            return ;
        }
        else if (target == head) {
            if (head->next == nullptr) {
                head = nullptr;
            }
            else {
                head = target->next;
                head->prev = nullptr;
            }
        }
        else {
            if (target->next == nullptr) {
                target->prev->next = nullptr;
            }
            else {
                target->prev->next = target->next;
                target->next->prev = target->prev;
            }
        }
        delete target;
    }

    Node* getHead() {
        return head;
    }

    ~DLL() {
        Node* temp_head = head;
        Node* temp_next = nullptr;
        while (temp_head) {
            temp_next = temp_head->next;
            delete temp_head;
            temp_head = temp_next;
        }
    }
};

int main() {
    Node* f_node = new Node(3);
    DLL temp_dll(f_node);
    temp_dll.printHead();
    temp_dll.insertAtHead(6);
    temp_dll.printHead();

    Node* n_node = nullptr;
    DLL n_dll(n_node);
    n_dll.printHead();
    n_dll.insertAtHead(3289);
    n_dll.printHead();
    n_dll.insertAtHead(3023232);
    n_dll.printHead();
    n_dll.deleteNode(n_dll.getHead());
    n_dll.printHead();
}