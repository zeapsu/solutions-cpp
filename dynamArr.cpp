#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
    int rows, col, nVal;
    
    cin >> rows >> col;

    int *arr[rows];

    for (int i = 0; i < rows; i++) {
        cin >> nVal;

        arr[i] = new int[nVal];

        for (int j = 0; j < nVal; j++) {
            cin >> arr[i][j];
        }

    }
    
    for (int i = 0; i < col; i++) {
        int x, y;

        cin >> x >> y;

        cout << arr[x][y] << endl;
    }

 	return 0;
}

