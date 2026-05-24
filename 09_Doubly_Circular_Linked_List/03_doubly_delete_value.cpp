#include <iostream>
using namespace std;
struct Node {
    int data;
    Node *prev, *next;
};
int main() {
    Node *head = NULL, *tail = NULL;
    int n, x, t;
    cin >> n;
    while (n--) {
        cin >> x;
        Node* node = new Node{x, tail, NULL};
        if (!head)
            head = tail = node;
        else {
            tail->next = node;
            tail = node;
        }
    }
    cin >> t;
    Node* cur = head;
    while (cur && cur->data != t) cur = cur->next;
    if (cur) {
        if (cur->prev)
            cur->prev->next = cur->next;
        else
            head = cur->next;
        if (cur->next) cur->next->prev = cur->prev;
    }
    for (Node* c = head; c; c = c->next) cout << c->data << " ";
}
