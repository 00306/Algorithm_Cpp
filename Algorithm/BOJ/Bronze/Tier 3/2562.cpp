//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 6/20/24.
//

#include <iostream>
using namespace std;

int main(int argc, char * argv[]) {
    int max = 0, index = 0, number;
    
    for (int i = 0; i < 9; i++) {
        cin >> number;
        if (number > max) {
            max = number;
            index = i;
        }
    }
    
    cout << max << "\n" << index+1 << endl;
}
