//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 6/1/24.
//

#include <iostream>
using namespace std;

int main(int argc, char * argv[]) {
    int priceSum, inputCount, result = 0;
    cin >> priceSum;
    cin >> inputCount;
    
    for (int i = 0; i < inputCount; i++) {
        int price, count;
        cin >> price >> count;
        result += price * count;
    }
    
    if (priceSum == result) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
