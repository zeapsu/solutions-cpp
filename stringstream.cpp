#include <sstream>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

vector<int> parseInts(string str) {
    stringstream parser(str);
    vector<int> intOnly;
    char ch; 
    int x;
    
    parser >> x;
    intOnly.push_back(x);

    for (int i = 0; i < str.length(); i++) {
       parser >> ch >> x;

       if (parser.fail()) {
           break;
       }
       else {
            intOnly.push_back(x);
       }
    }

    return intOnly;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

