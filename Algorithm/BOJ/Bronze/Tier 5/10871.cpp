//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 6/17/24.
//

#include <iostream>
using namespace std;

int main(int argc, char * argv[]) {
    int n, x, element;
    string result = "";
    cin >> n >> x;
    
    for (int i = 0; i < n; i++) {
        cin >> element;
        
        if (element < x) {
            cout << element << " ";
        }
    }
    
}
    