//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 10/28/24.
//

#include <string>
#include <vector>

using namespace std;

long long solution(int num) {
    long long answer = 0;
    long long count = 0;
    long long number = num;
    
    if (number == 1) { return 0; }
    
    while (count <= 500) {
        if (number == 1) break;
        if (number % 2 == 0) { number /= 2; }
        else { number = number * 3 + 1; }
        count++;
    }
    
    if (number == 1 && count < 500) {
        answer = count;
    } else { answer = -1; }
    
    return answer;
}

int main(int argc, char* argv[]) {
    int num = 16;
    printf("%lld\n", solution(num));
}
