//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 10/2/24.
//

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for (int i = 2; i < n; i++) {
        if (n % i == 1) {
            answer = i;
            break;
        }
    }
    
    return answer;
}

int main(int argc, char * argv[]) {
    int n = 12;
    printf("%d", solution(n));
}
