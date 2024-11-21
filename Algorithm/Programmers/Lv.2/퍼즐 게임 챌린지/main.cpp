//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 11/21/24.
//

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

long long calculateTime(vector<int> diffs, vector<int> times, long long level) {
    long long time = 0;
    int time_prev = 0;
    
    for (int i = 0; i < diffs.size(); i++) {
        int time_cur = times[i];
        int diff = diffs[i];
        
        if (diff <= level) {
            time += time_cur;
        } else {
            time += (diff - level) * (time_cur + time_prev) + time_cur;
        }
        
        time_prev = time_cur;
        
    }
    return time;
}



int solution(vector<int> diffs, vector<int> times, long long limit) {
    int level = 1;
    int max_diff = *max_element(diffs.begin(), diffs.end());
    int start = 1;
    int end = max_diff;
    while (start <= end) {
        int mid = (start + end) / 2;
        long long time = calculateTime(diffs, times, mid);
        if (time <= limit) {
            level = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
        
    }
    
    return level;
}


