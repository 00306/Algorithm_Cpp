//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 6/13/24.
//

#include <iostream>
using namespace std;

int main(int argc, char * argv[]) {
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        
        cout << "\n";
    }
}
