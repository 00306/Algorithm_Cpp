//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 7/6/24.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char * argv[]) {
    string s;
    int i;
    getline(cin, s);
    cin >> i;
    
    vector<char> array(s.begin(), s.end());
    
    cout << array[i-1] << endl;
    
    
    
}
