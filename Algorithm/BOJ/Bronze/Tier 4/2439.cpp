//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 6/14/24.
//

#include <iostream>
using namespace std;

int main(int argc, char * argv[]) {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j >= n - i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        
        cout << "\n";
    }
    
}
