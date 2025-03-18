//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 5/22/24.
//

#include <iostream>
using namespace std;

int main(int argc, char * argv[]) {
    int hour, minute;
    cin >> hour >> minute;
    minute -= 45;
    if (minute < 0) {
        minute += 60;
        hour -= 1;
    }
    if (hour < 0) {
        hour = 23;
    }
    
    cout << hour << " " << minute;
}
