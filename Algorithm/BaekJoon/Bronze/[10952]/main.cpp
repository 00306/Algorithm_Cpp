//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 6/15/24.
//

#include <iostream>
using namespace std;

int main(int argc, char * argv[]) {
    int a, b;
    
    while (true) {
        cin >> a >> b;
        if (a == 0 && b == 0) { break; }
        cout << a+b << endl;
    }
}
