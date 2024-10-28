//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 10/28/24.
//

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    
    for (int i = 0; i < signs.size(); i++) {
        if (signs[i]) { answer += absolutes[i]; }
        else { answer -= absolutes[i]; }
    }
    return answer;
}

int main(int argc, char* argv[]) {
    vector<int> absolutes = { 4, 7, 12 };
    vector<bool> signs = { true, false, true };
    
    printf("%d\n", solution(absolutes, signs));
}
