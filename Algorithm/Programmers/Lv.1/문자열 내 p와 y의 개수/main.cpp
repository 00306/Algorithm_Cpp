//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 10/26/24.
//

#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int p = 0;
    int y = 0;
    
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'p' || s[i] == 'P') { p++; }
        else if (s[i] == 'y' || s[i] == 'Y') { y++; }
    }
    
    if (p != y) { answer = false; }
    
    return answer;
}


int main(int argc, char* argv[]) {
    string s = "pyPPyyYP";
    
    std::cout << solution(s);
}
