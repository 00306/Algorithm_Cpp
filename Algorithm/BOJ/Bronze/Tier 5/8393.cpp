//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 5/28/24.
//

#include <iostream>
using namespace std;

int main(int argc, char * argv[]) {
    int n, result = 0;
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        result += i;
    }
    
    cout << result << endl;
}
