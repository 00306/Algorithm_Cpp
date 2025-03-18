//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 7/3/24.
//

#include <iostream>
using namespace std;

int main(int argc, char * argv[]) {
    int n, m, startIndex, endIndex, temp;
    cin >> n >> m;
    int basket[n+2];
    
    for (int i = 1; i < n+2; i++) {
        basket[i] = i;
    }
    
    while (m--) {
        cin >> startIndex >> endIndex;
        
        for (int i = 0; i < (endIndex - startIndex+1)/2; i++) {
            temp = basket[startIndex+i];
            basket[startIndex+i] = basket[endIndex-i];
            basket[endIndex-i] = temp;
        }
    }
    
    for (int i = 1; i < n+1; i++) {
        cout << basket[i] << " ";
    }
    
}
