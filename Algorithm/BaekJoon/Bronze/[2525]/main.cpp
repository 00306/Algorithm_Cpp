//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 5/23/24.
//

#include <iostream>
using namespace std;

int main(int argc, char * argv[]) {
    int hour, minute, time;
    cin >> hour >> minute;
    cin >> time;
    
    minute += time;
    hour += minute / 60;
    minute = minute % 60;
    hour = hour % 24;
    
    cout << hour << " " << minute << endl;
    
}
