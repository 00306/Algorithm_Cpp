//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 5/19/24.
//

#include <iostream>
using namespace std;

int main(int argc, char * argv[]) {
    int score;
    cin >> score;
    if (score >= 90 && score <= 100) {
        cout << "A";
    } else if (score >= 80 && score <= 89) {
        cout << "B";
    } else if (score >= 70 && score <= 79) {
        cout << "C";
    } else if (score >= 60 && score <= 69) {
        cout << "D";
    } else {
        cout << "F";
    }
}
