//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 11/11/24.
//

#include <stdio.h>

int main(int argc, char * argv[]) {
    int n;
    int layer = 1;
    int result = 1;
    scanf("%d", &n);
    
    while (n > result) {
        result += layer * 6;
        layer++;
    }
    
    printf("%d", layer);
}
