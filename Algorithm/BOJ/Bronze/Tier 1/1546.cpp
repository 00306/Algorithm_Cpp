//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 7/4/24.
//

#include <iostream>
using namespace std;

int main(int argc, char * argv[]) {
    int n;
    cin >> n;
    double sequence[n+1], s, max = -1, sum = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> s;
        sequence[i] = s;
        if (s > max) {
            max = s;
        }
    }
    
    
    for (int i = 0; i < n; i++) {
        sequence[i] = (sequence[i] / max) * 100;
        sum += sequence[i];
    }
    
    cout << sum / double(n) << endl;
}
