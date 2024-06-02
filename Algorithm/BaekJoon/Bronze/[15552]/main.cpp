//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 6/3/24.
//

#include <iostream>
using namespace std;

int main(int argc, char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;
        cout << a + b << "\n";
    }
}
