//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 10/28/24.
//

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    
    for (int num: arr) {
        if (num % divisor == 0) { answer.push_back(num); }
    }
    
    if (answer.size() == 0) {
        answer.push_back(-1);
        return answer;
    }
    
    for (size_t i = 0; i < answer.size(); i++) {
        size_t minIndex = i;
        
        for (size_t j = i+1; j < answer.size(); j++) {
            if (answer[minIndex] > answer[j]) { minIndex = j; }
        }
        
        if (minIndex != i) {
            int temp = answer[minIndex];
            answer[minIndex] = answer[i];
            answer[i] = temp;
        }
    }
    
    return answer;
}

int main(int argc, char* argv[]) {
    vector<int> arr = { 5, 9, 7, 10 };
    int divisor = 5;
    
    vector<int> result = solution(arr, divisor);
    
    for (int num: result) {
        printf("%d ", num);
    }
}
