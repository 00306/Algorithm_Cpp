//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 11/11/24.
//

#include <stdio.h>

int main(int argc, char * argv[]) {
    char N[32];
    int B;
    int result = 0;
    int index = 0;
    
    scanf("%s", N);
    scanf("%d", &B);
    
    while (N[index] != '\0') {
        result *= B;
        
        if (N[index] >= '0' && N[index] <= '9') {
            result += N[index] - '0';
        } else if (N[index] >= 'A' && N[index] <= 'Z') {
            result += N[index] - 'A' + 10;
        }
        
        index++;
    }
    
    printf("%d", result);
}
