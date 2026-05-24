#include <iostream>
#include <queue>
using namespace std;
int main() {
    queue<string> q;
    int n;
    string name;
    cin >> n;
    while (n--) {
        cin >> name;
        q.push(name);
    }
    while (!q.empty()) {
        cout << q.front() << " got ticket";
        q.pop();
    }
}
