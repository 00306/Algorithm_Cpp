//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 9/30/24.
//

#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            answer += i + (n / i);
            if (i * i == n) { answer -= i; }
        }
    }
    
    return answer;
}

int main(int argc, char * argv[]) {
    int n;
    cin >> n;
    cout << solution(n);
}
