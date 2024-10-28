//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 10/28/24.
//

#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int num = x;
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }
    
    answer = x % sum == 0;
    
    return answer;
}

int main(int argc, char* argv[]) {
    int x = 10;
    printf("%d", solution(x));
    
}
