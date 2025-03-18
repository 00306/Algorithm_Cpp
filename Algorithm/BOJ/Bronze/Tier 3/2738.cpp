//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 3/17/25.
//

#include <stdio.h>

int main(int argc, char *argv[]) {
    int n, m, element;
    
    
    scanf("%d", &n);
    scanf("%d", &m);
    
    int matrixA[n][m];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &element);
            matrixA[i][j] = element;
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &element);
            printf("%d ", matrixA[i][j] + element);
        }
        
        printf("\n");
    }
    
    
    return 0;
}
