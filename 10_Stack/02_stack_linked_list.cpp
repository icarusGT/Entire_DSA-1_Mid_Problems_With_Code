#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
int main()
{
    Node *top = NULL;
    int n, x;
    cin >> n;
    while (n--)
    {
        cin >> x;
        top = new Node{x, top};
    }
    while (top)
    {
        cout << top->data << " ";
        top = top->next;
    }
}
