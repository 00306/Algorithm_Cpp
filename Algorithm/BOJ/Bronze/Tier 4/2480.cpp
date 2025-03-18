//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 5/24/24.
//

#include <iostream>
using namespace std;

int main(int argc, char * argv[]) {
    int num1, num2, num3;
    
    cin >> num1 >> num2 >> num3;
    
    if (num1 == num2 && num2 == num3) {
        cout << 10000 + num1*1000 << endl;
    } else if (num1 == num2 || num1 == num3) {
        cout << 1000 + num1*100 << endl;
    } else if (num2 == num3) {
        cout << 1000 + num2*100 << endl;
    } else {
        if (num1 > num2 && num1 > num3) {
            cout << num1 * 100 << endl;
        } else if (num2 > num1 && num2 > num3) {
            cout << num2 * 100 << endl;
        } else {
            cout << num3 * 100 << endl;
        }
        
        
    }
}
