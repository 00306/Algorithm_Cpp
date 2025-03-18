//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 8/26/24.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

string leftTrim(const string &s) {
    size_t start = s.find_first_not_of(" ");
    return (start == string::npos) ? "" : s.substr(start);
}

string rightTrim(const string &s) {
    size_t end = s.find_last_not_of(" ");
    return (end == string::npos) ? "" : s.substr(0, end + 1);
}

string trim(const string &s) {
    return rightTrim(leftTrim(s));
}

int main(int argc, char * argv[]) {
    int result = 1;
    char c[1000002];

    cin.getline(c, 1000002);
    
    string trimmed = trim(c);
    
    if (trimmed == "") {
        cout << 0 << endl;
        exit(0);
    }
    
    for (int i = 0; i < trimmed.length(); i++) {
        if (trimmed[i] == ' ') {
            result++;
        }
    }
    
    cout << result << endl;
}
