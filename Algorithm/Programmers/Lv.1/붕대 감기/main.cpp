//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 11/6/24.
//

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int bandage[], size_t bandage_len, int health, int** attacks, size_t attacks_rows, size_t attacks_cols) {
    int answer = 0;
    int current_health = health;
    int current_time = 0;
    int additional_time = 0;
    int casting_time = bandage[0];
    int recovery_per_sec = bandage[1];
    int additional_recovery = bandage[2];
    size_t i = 0;
    
    while (++current_time) {
        if (i >= attacks_rows) { break; }
        
        if (current_time == attacks[i][0]) {
            current_health -= attacks[i][1];
            i++;
            additional_time = 0;
            if (current_health <= 0) { return -1; }
            continue;
        }
        
        current_health += recovery_per_sec;
        additional_time++;
        if (current_health > health) { current_health = health; }
        
        if (additional_time == casting_time) {
            current_health += additional_recovery;
            
            if (current_health > health) { current_health = health; }
            additional_time = 0;
        }
    }
    
    answer = current_health;
    
    return answer;
}

int main(int argc, char * argv[]) {
    int bandage[3] = { 5, 1, 5 };
    int health = 3;
    int attacks_arr[4][2] = { { 2, 10 }, { 9, 15 }, { 10, 5 }, { 11, 5 }  };
    size_t attacks_row = 4;
    size_t attacks_cols = 2;
    size_t bandage_len = 3;
    
    int* attacks[attacks_row];
    for (size_t i = 0; i < attacks_row; i++) {
        attacks[i] = attacks_arr[i];
    }
    
    printf("%d", solution(bandage, bandage_len, health, attacks, attacks_row, attacks_cols));
    
    
}
