//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 11/23/24.
//

#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    string answer = "";
    stringstream ss(pos);
    string minute_str;
    string second_str;
    int minute;
    int second;
    getline(ss, minute_str, ':');
    getline(ss, second_str);
    minute = stoi(minute_str);
    second = stoi(second_str);
    
    stringstream ops(op_start);
    string op_start_minute_str;
    string op_start_second_str;
    int op_start_minute;
    int op_start_second;
    getline(ops, op_start_minute_str, ':');
    getline(ops, op_start_second_str);
    op_start_minute = stoi(op_start_minute_str);
    op_start_second = stoi(op_start_second_str);
    
    stringstream ope(op_end);
    string op_end_minute_str;
    string op_end_second_str;
    int op_end_minute;
    int op_end_second;
    getline(ope, op_end_minute_str, ':');
    getline(ope, op_end_second_str);
    op_end_minute = stoi(op_end_minute_str);
    op_end_second = stoi(op_end_second_str);
    
    stringstream vln(video_len);
    string video_len_minute_str;
    string video_len_second_str;
    int video_len_minute;
    int video_len_second;
    getline(vln, video_len_minute_str, ':');
    getline(vln, video_len_second_str);
    video_len_minute = stoi(video_len_minute_str);
    video_len_second = stoi(video_len_second_str);
    
    for (string command: commands) {
        if (
            (minute > op_start_minute || (minute == op_start_minute && second >= op_start_second)) &&
            (minute < op_end_minute || (minute == op_end_minute && second <= op_end_second))
            ) {
                minute = op_end_minute;
                second = op_end_second;
            }
        
        if (command == "prev") {
            if (minute == 0 && second <= 10) {
                second = 0;
            } else if (second < 10) {
                minute -= 1;
                second = 60 - (10 - second);
            } else { second -= 10; }
            
        } else if (command == "next") {
            if (second >= 50) {
                minute += 1;
                second = (second + 10) % 60;
            } else {
                second += 10;
            }
            
            if (minute == video_len_minute && second >= video_len_second) {
                minute = video_len_minute;
                second = video_len_second;
            }
        }
        
        if (
            (minute > op_start_minute || (minute == op_start_minute && second >= op_start_second)) &&
            (minute < op_end_minute || (minute == op_end_minute && second <= op_end_second))
            ) {
                minute = op_end_minute;
                second = op_end_second;
            }
    }
    
    minute_str = to_string(minute);
    second_str = to_string(second);
    
    if (minute_str.length() < 2) {
        minute_str = string(1, '0') + minute_str;
    }
    
    if (second_str.length() < 2) {
        second_str = string(1, '0') + second_str;
    }
    
    return minute_str + ":" + second_str;
}
