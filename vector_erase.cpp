#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size;
    vector<int> v;
    cin >> size;

    for (int i = 0; i < size; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    
    int q1;
    cin >> q1;

    v.erase(v.begin() + (q1 - 1));

    int r1, r2;
    cin >> r1 >> r2;

    v.erase(v.begin() + (r1 - 1), v.begin() + (r2 - 1));

    cout << v.size() << endl;
 
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}

