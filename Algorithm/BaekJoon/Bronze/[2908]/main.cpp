//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 8/27/24.
//

#include <iostream>
#include <cstring>
using namespace std;

void reversedNum(char *num) {
    size_t length = strlen(num);
    for (int i = 0; i < length / 2; i++) {
        int temp = num[i];
        num[i] = num[length - i - 1];
        num[length - i - 1] = temp;
    }
}

int main(int argc, char * argv[]) {
    char a[5], b[5];
    cin >> a >> b;
    reversedNum(a);
    reversedNum(b);
    int reversedA = stoi(string(a));
    int reversedB = stoi(string(b));
    
    cout << (reversedA > reversedB ? reversedA : reversedB) << endl;
}
