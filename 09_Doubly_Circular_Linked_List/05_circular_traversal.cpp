#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
int main() {
    Node *head = NULL, *tail = NULL;
    int n, x;
    cin >> n;
    while (n--) {
        cin >> x;
        Node* node = new Node{x, NULL};
        if (!head)
            head = tail = node;
        else {
            tail->next = node;
            tail = node;
        }
        tail->next = head;
    }
    if (head) {
        Node* c = head;
        do {
            cout << c->data << " ";
            c = c->next;
        } while (c != head);
    }
}
