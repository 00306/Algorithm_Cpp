//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 10/28/24.
//

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    if (arr.empty()) {
        return { -1 };
    }
    
    int min = arr[0];
    
    for (int i = 1; i < arr.size(); i++) {
        if (min > arr[i]) { min = arr[i]; }
    }
    
    for (int num: arr) {
        if (num != min) { answer.push_back(num); }
    }
    
    if (answer.empty()) {
        return { -1 };
    }
    
    return answer;
}

int main(int argc, char* argv[]) {
    vector<int> arr = { 4, 3, 2, 1 };
    vector<int> result = solution(arr);
    
    for (int num: result) {
        printf("%d ", num);
    }
}
