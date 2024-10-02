//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 10/2/24.
//

#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    double sum = 0;
    
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
    }
    
    answer = sum / arr.size();
    
    return answer;
}

int main(int argc, char * argv[]) {
    vector<int> arr = { 1, 2, 3, 4 };
    printf("%.1f", solution(arr));
}
