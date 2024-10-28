//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 10/28/24.
//

#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    for (int i = 0; i < seoul.size(); i++) {
        if (seoul[i] == "Kim") {
            answer = "김서방은 " + to_string(i) + "에 있다";
            break;
        }
    }
    
    return answer;
}

int main(int argc, char* argv[]) {
    vector<string> seoul = { "Jane", "Kim" };
    printf("%s", solution(seoul).c_str());
}
