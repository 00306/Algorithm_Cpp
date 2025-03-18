//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 6/2/24.
//

#include <iostream>
using namespace std;

int main(int argc, char * argv[]) {
    int n;
    string result;
    cin >> n;
    for (int i = 0; i < n/4; i++) {
        result += "long ";
    }
    result += "int";
    
    cout << result << endl;
}
