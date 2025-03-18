//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 6/19/24.
//

#include <iostream>
using namespace std;

int main(int argc, char * argv[]) {
    int n, element, max = -1000001, min = 1000001;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> element;
        if (element > max) {
            max = element;
        }
        
        if (element < min) {
            min = element;
        }
    }
    
    cout << min << " " << max << endl;
}
