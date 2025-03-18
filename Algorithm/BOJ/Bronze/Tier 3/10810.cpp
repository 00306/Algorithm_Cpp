//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 6/21/24.
//

#include <iostream>
using namespace std;

int main(int argc, char * argv[]) {
    int n, m;
    cin >> n >> m;
    
    int* basket = new int[n+1]();
    
    
    while(m--) {
        int i, j, k;
        cin >> i >> j >> k;
        
        for (; i<=j; i++) {
            basket[i-1] = k;
        }
        
    }
    
    
    for (int i = 0; i<n; i++) {
        cout << basket[i] << " ";
    }
    
}
