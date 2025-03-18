//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 6/16/24.
//

#include <iostream>
using namespace std;

int main(int argc, char * argv[]) {
    int sequence[201] = {0}, n, x;
    cin >> n;
    
    while (n--) {
        cin >> x;
        sequence[x+100]++;
    }
    cin >> x;
    cout << sequence[x+100] << endl;
    
}
