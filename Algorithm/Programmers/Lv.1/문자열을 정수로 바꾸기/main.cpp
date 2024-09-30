//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 9/30/24.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    bool is_negative = s[0] == '-';
    bool has_sign = !isdigit(s[0]);
    
    for (size_t i = has_sign ? 1 : 0; i < s.length(); i++) {
        answer = answer * 10 + s[i] - '0';
    }
    
    if (is_negative) { answer = -answer; }
    
    return answer;
}

int main(int argc, char * argv[]) {
    string s = "+1234";
    cout << solution(s);
}
