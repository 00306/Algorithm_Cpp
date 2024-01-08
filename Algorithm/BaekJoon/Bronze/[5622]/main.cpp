//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 9/9/24.
//

#include <iostream>

using namespace std;

int main(int argc, char * argv[]) {
    string w;
    cin >> w;
    int time = 0;
    
    for (int i = 0; i < w.length(); i++) {
        if (w[i] >= 'A' && w[i] <= 'C') {
            time += 3;
        } else if (w[i] >= 'D' && w[i] <= 'F') {
            time += 4;
        } else if (w[i] >= 'G' && w[i] <= 'I') {
            time += 5;
        } else if (w[i] >= 'J' && w[i] <= 'L') {
            time += 6;
        } else if (w[i] >= 'M' && w[i] <= 'O') {
            time += 7;
        } else if (w[i] >= 'P' && w[i] <= 'S') {
            time += 8;
        } else if (w[i] >= 'T' && w[i] <= 'V') {
            time += 9;
        } else if (w[i] >= 'W' && w[i] <= 'Z') {
            time += 10;
        }
    }
    
    cout << time;
}
