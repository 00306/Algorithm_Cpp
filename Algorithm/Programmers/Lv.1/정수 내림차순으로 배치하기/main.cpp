//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 10/27/24.
//

#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<int> numbers;
    
    while (n > 0) {
        int digit = n % 10;
        numbers.push_back(digit);
        n /= 10;
    }
    
    for (int i = 0; i < numbers.size(); i++) {
        int maxIndex = i;
        
        for (int j = i; j < numbers.size(); j++) {
            if (numbers[maxIndex] < numbers[j]) {
                maxIndex = j;
            }
        }
        
        if (i != maxIndex) {
            int temp = numbers[i];
            numbers[i] = numbers[maxIndex];
            numbers[maxIndex] = temp;
        }
    }
    
    for (int num: numbers) {
        answer = answer * 10 + num;
    }
    
    return answer;
}

int main(int argc, char* argv[]) {
    long long n = 118723;
    solution(n);
}
