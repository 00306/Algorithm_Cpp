//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 5/21/24.
//

#include <iostream>
using namespace std;

int main(int argc, char * argv[]) {
    int x, y;
    cin >> x;
    cin >> y;
    
    if (x > 0 && y > 0) {
        cout << 1 << endl;
    } else if (x < 0 && y > 0) {
        cout << 2 << endl;
    } else if (x < 0 && y < 0) {
        cout << 3 << endl;
    } else if ( x > 0 && y < 0) {
        cout << 4 << endl;
    }   
}
