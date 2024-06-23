//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 6/23/24.
//

#include <iostream>
using namespace std;

int main(int argc, char * argv[]) {
    bool numbers[32] = { false };
    int number, max = 0, min = 31;
    for (int i = 0; i < 28; i++) {
        cin >> number;
        numbers[number] = true;
    }
    
    for (int i = 1; i <= 30; i++) {
        if (!numbers[i]) {
            if (i > max) {
                max = i;
            }
            
            if (i < min) {
                min = i;
            }
        }
    }
    
    cout << min << endl << max << endl;

    
}
