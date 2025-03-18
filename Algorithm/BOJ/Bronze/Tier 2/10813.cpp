//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 6/22/24.
//

#include <iostream>
using namespace std;

int main(int argc, char * argv[]) {
    int n, m;
    cin >> n >> m;
    int basket[n+2];
    
    for (int i = 1; i < n+1; i++) {
        basket[i] = i;
    }
    
    while(m--) {
        int i, j, temp;
        cin >> i >> j;
        temp = basket[i];
        
        basket[i] = basket[j];
        basket[j] = temp;
    }
    
    for (int i = 1; i < n+1; i++) {
        cout << basket[i] << " ";
    }
    
    
}
