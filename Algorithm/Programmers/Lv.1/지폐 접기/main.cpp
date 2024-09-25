//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 9/25/24.
//

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> wallet, vector<int> bill) {
    int answer = 0;
    int walletWidth = wallet[0];
    int walletHeight = wallet[1];
    int billWidth = bill[0];
    int billHeight = bill[1];
    
    while (walletWidth < billWidth || walletHeight < billHeight) {
        if (walletWidth >= billHeight && walletHeight >= billWidth) { break; }
        answer++;
        if (billWidth >= billHeight) { billWidth /= 2; }
        else { billHeight /= 2; }
    }
    
    return answer;
}

int main(int argc, const char * argv[]) {
    vector<int> wallet = { 50, 50 };
    vector<int> bill = { 100, 241 };
    
    printf("%d", solution(wallet, bill));
    
}
