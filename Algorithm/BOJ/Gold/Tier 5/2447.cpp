//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 10/24/24.
//

#include <stdio.h>

void recursionStar(int x, int y, int n) {
//    if (n == 1) return;
    
    if ((x/n) % 3 == 1 && (y/n) % 3 == 1) {
        printf(" ");
    } else {
        if (n / 3 == 0) { printf("*"); }
        else { recursionStar(x, y, n/3); }
    }
    
}


int main(int argc, char* argv[]) {
    int n;
    scanf("%d", &n);
    
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            recursionStar(j, i, n);
        }
        
        printf("\n");
    }
    
    
}
