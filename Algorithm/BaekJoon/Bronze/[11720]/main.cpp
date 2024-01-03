//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 8/24/24.
//

#include <iostream>
using namespace std;

int main(int argc, char * argv[]) {
    int n, sum = 0;
    string s;
    cin >> n;
    cin >> s;
    
    for (int i = 0; i < n; i++) {
        sum += int(s[i]) - 48;
    }
    
    cout << sum;
}
