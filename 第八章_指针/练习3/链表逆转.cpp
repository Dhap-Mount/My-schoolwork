#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

struct Linkedlist {
    Node *head; // 头指针
};

void createList(Linkedlist &list, int n) {
    Node * tail = nullptr; // 创建一个局部的尾指针，用于指向当前节点
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        //  tail记录新建节点的地址
        Node * newNode = new Node;
        newNode->data = a;
        newNode->next = nullptr;

        if (list.head == nullptr) {
            list.head = newNode; // 设置头指针
            tail = newNode; // 尾指针（局部）指向当前位置
        } else {
            tail->next = newNode;
            tail = tail->next;
        }
    }
}

void Reverse(Linkedlist &list) {
    Node * curr = list.head; // current
    Node * prev = nullptr;
    Node * next = nullptr;

    while (curr != nullptr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    list.head = prev;
}

void Print(Linkedlist list) {
    Node * curr = list.head;
    while (curr != nullptr) {
        cout << curr->data;
        if (curr->next != nullptr) cout << " ";
        curr = curr->next;
    }
    cout << endl;
}

void Delete(Linkedlist &list) {
    Node * curr = list.head;
    while (curr != nullptr) {
        Node * store = curr->next; // 先记录下一个地址
        delete curr;
        curr = store;
    }
    list.head = nullptr; // 清空头指针
}

int main() {
    int n;
    cin >> n;
    Linkedlist alist;
    alist.head = nullptr;
    createList(alist, n);
    Reverse(alist);
    Print(alist);
    Delete(alist);

    return 0;
}