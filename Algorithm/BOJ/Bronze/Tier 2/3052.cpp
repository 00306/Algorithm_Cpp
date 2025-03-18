//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 6/24/24.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char * argv[]) {
    int n;
    vector<int> uniqueRemainders;
    
    for (int i = 0; i < 10; i++) {
        cin >> n;
        bool same = false;
        
        for (int j = 0; j < uniqueRemainders.size(); j++) {
            
            if (uniqueRemainders[j] == n % 42) {
                same = true;
                break;
            }
        }
        
        if (!same) {
            uniqueRemainders.push_back(n % 42);
        }
    }
    
    
    cout << uniqueRemainders.size() << endl;
    
    
}
