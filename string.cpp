#include <iostream>
#include <string>
using namespace std;

int main() {
    int x, y;   // string size holders
    string a, b;

    cin >> a;
    cin >> b;

    x = a.size();
    y = b.size();

    cout << x << " " << y << endl;
    cout << a + b << endl;

    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    cout << a << " " << b << endl;
  
    return 0;
}
