//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 5/10/24.
//

#include <iostream>
using namespace std;


int main(int argc, char * agrv[]) {
    int a,b;
    cin >> a >> b;
    cout << (b % 10) * a << "\n" << ((b / 10) % 10) * a << "\n" << (b / 100) * a << "\n" << a * b << endl;
}
