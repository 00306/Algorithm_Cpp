//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 3/18/25.
//

#include <stdio.h>

int main(int argc, char *argv[]) {
    int n, max = 0, row = 0, col = 0;
    
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d", &n);
            
            if (n > max) {
                row = i;
                col = j;
                max = n;
            }
        }
    }
    
    printf("%d\n%d %d", max, row + 1, col + 1);
}
