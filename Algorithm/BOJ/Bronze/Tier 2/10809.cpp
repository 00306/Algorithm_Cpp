//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 8/25/24.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char * argv[]) {
    int alphabets[26];
    string s;
    cin >> s;
    
    fill(alphabets, alphabets + 26, -1);
    
    for (int i = 0; i < s.length(); i++) {
        if (alphabets[int(s[i]) - 97] == -1) {
            alphabets[int(s[i]) - 97] = i;
        }
    }
    
    for (int i = 0; i < 26; i++) {
        cout << alphabets[i] << " ";
    }
    
}
