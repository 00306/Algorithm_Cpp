//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 6/16/24.
//

#include <iostream>
using namespace std;

int main(int argc, char * argv[]) {
    int n, f, count = 0;
    cin >> n;
    
    int sequence[n+1];
    
    for (int i = 0; i < n; i++) {
        cin >> sequence[i];
    }
    
    cin >> f;
    
    for (int i = 0; i < n; i++) {
        if (sequence[i] == f) {
            count += 1;
        }
    }
    
    cout << count << endl;
    
}
