//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 10/24/24.
//

#include <stdio.h>

int countMoves(int n) {
    if (n == 1) { return 1; }
    
    return 2 * countMoves(n-1) + 1;
}

void hanoi(int n, int start, int aux, int finish) {
    int count = 0;
    
    if (n == 1) {
        printf("%d %d\n", start, finish);
        return;
    }
    
    hanoi(n-1, start, finish, aux);
    printf("%d %d\n", start, finish);
    count += 1;
    hanoi(n-1, aux, start, finish);
}

// 기둥이 4개 일 때

void hanoi4(int n, int start, int aux1, int aux2, int finish) {
    if (n == 0) return;
    
    if (n == 1) {
        printf("%d -> %d\n", start, finish);
        return;
    }
    
    int k = n / 2;
    
    hanoi4(k, start, finish, aux2, aux1);
    hanoi(n-k, start, aux2, finish);
    hanoi4(k, aux1, start, aux2, finish);
}


int main(int argc, char * argv[]) {
    int n = 0;
    scanf("%d", &n);
    
    int count = countMoves(n);
    printf("%d\n", count);
//    hanoi(n, 1, 2, 3);
    
    hanoi4(n, 1, 2, 3, 4);
}


