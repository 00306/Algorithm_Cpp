//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 8/22/24.
//

#include <iostream>
using namespace std;

int main(int argc, char* argv []) {
    int count;
    cin >> count;
    
    for (int i = 0; i < count; i++) {
        string testCase;
        cin >> testCase;
        cout << testCase[0] << testCase[testCase.length()-1] << endl;
    }
}
