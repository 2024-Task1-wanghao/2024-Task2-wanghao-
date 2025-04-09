#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int b[100];
    for (int i = 0; i < n; i++) {
        b[i] = a[n - 1 - i];
    }
    for (int i = 0; i < n; i += 3) {
        cout << b[i] << " ";
    }
    cout << endl;
    return 0;
}
