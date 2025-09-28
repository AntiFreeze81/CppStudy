#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) : data(d), next(nullptr){}
};

class LinkedList {
private:
    Node* head;
    int index_n;
public:
    LinkedList(Node* h) : head(h) {
        this->index_n = 0;
    }

    void insertAtHead(int d) {
        Node* temp_node = new Node(d);
        temp_node->next = head;
        head = temp_node;
        index_n++;
    }

    void insertAtTail(int d) {
        Node* temp_node = new Node(d);
        Node* temp_node2 = head;
        while (temp_node2->next) {
            temp_node2 = temp_node2->next;
        }
        temp_node2->next = temp_node;
        index_n++;
    }

    int findData(int d) {
        if (d < 0) {
            cout << "0이상의 값을 입력해주세요." << endl;
            return -404;
        }
        else if (d >= 0 && d <= this->index_n) {
            Node* temp_node = this->head;
            for (int i = 0; i < d; i++) {
                temp_node = temp_node->next;
            }
            return temp_node->data;
        }
        else {
            cout << "입력한 값보다 인덱스의 값이 작습니다." << endl;
            return -404;
        }
    }

    void updateData(int n, int d) {
        if (n < 0) {
            cout << "0이상의 값을 입력하세요." << endl;
        }
        else if (n >= 0 && n <= index_n) {
            Node* temp_node = this->head;
            for (int i = 0; i < n; i++) {
                temp_node = temp_node->next;
            }
            temp_node->data = d;
            cout << "성공적으로 변경 되었습니다." << endl;
        }
        else {
            cout << "입력한 값보다 인덱스의 값이 작습니다." << endl;
        }
    }

    ~LinkedList() {
        Node* temp = head;
        Node* temp_node = nullptr;
        while (temp) {
            temp_node = temp->next;
            temp->next = nullptr;
            delete temp;
            temp = temp_node;
        }
    }
};

int main() {
    Node* head = new Node(1);
    LinkedList sll(head);

    for (int i = 0; i < 203; i++) {
        sll.insertAtTail(i*20+23);
    }

    for (int j = 0; j < 20; j++) {
        sll.insertAtHead(j*3+22);
    }

    cout << sll.findData(0) << endl;
    sll.updateData(0, 1);
    cout << sll.findData(0) << endl;
}