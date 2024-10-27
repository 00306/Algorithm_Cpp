//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 10/27/24.
//

#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    
    while (n > 0) {
        int digit = n % 10;
        answer.push_back(digit);
        n /= 10;
    }
    
    return answer;
}

int main(int argc, char* argv[]) {
    long long n = 12345;
    solution(n);
}
