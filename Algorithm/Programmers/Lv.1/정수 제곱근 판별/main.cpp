//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 10/28/24.
//

#include<iostream>
#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = -1;
    long long left = 1;
    long long right = n;
    
    while (left <= right) {
        long long mid = left + (right - left) / 2;
        
        if (mid == n / mid && n % mid == 0) {
            answer = (mid+1) * (mid+1);
            break;
        } else if (mid > n / mid) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    
    return answer;
}

int main(int argc, char* argv[]) {
    long long n = 121;
    cout << solution(n);
}
