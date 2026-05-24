#include <iostream>
using namespace std;
struct Node {
    int data;
    Node *prev, *next;
};
int main() {
    Node *head = NULL, *tail = NULL;
    int n, x;
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
    for (Node* c = head; c; c = c->next) cout << c->data << " ";
}
