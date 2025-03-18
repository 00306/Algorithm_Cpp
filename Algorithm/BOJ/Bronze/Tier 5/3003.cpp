//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 9/12/24.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int correctPieces[7] = { 1, 1, 2, 2, 2, 8 };
    int count;
    
    for (int i = 0; i < 6; i++) {
        cin >> count;
        cout << correctPieces[i] - count << " ";
    }
    
    
}
