//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 10/28/24.
//

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 45;
    
    for (int i = 0; i < numbers.size(); i++) {
        answer -= numbers[i];
    }
    
    return answer;
}

int main(int argc, char* argv[]) {
    vector<int> numbers = { 1, 2, 3, 4, 5, 7, 9 };
    
    printf("%d\n", solution(numbers));
}
