#include <iostream>
using namespace std;
int main()
{
    int st[100], top = -1, n, x;
    cin >> n;
    while (n--)
    {
        cin >> x;
        st[++top] = x;
    }
    while (top >= 0)
        cout << st[top--] << " ";
}
