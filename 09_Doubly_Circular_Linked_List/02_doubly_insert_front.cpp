#include <iostream>
using namespace std;
struct Node {
    int data;
    Node *prev, *next;
};
int main() {
    Node* head = NULL;
    int n, x;
    cin >> n;
    while (n--) {
        cin >> x;
        Node* node = new Node{x, NULL, head};
        if (head) head->prev = node;
        head = node;
    }
    for (Node* c = head; c; c = c->next) cout << c->data << " ";
}
