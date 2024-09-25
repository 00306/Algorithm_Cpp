//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 9/25/24.
//

#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<string>> board, int h, int w) {
    int answer = 0;
    size_t boardSize = board.size();
    vector<int> dh = { -1, 1, 0, 0 };
    vector<int> dw = { 0, 0, 1, -1 };
    
    for (int i = 0; i < dh.size(); i++) {
        int newH = h + dh[i];
        int newW = w + dw[i];
        if (newH < 0 || newH >= boardSize || newW < 0 || newW >= boardSize) { continue; }
        
        if (board[h][w] == board[newH][newW]) { answer++; }
    }
    
    return answer;
}
