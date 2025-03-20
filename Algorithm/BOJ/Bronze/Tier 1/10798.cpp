//
//  10798.cpp
//  Algorithm
//
//  Created by 송지혁 on 3/20/25.
//

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char words[5][16] = {"", };
    int i, j = 0;
    
    for (i = 0; i < 5; i++) {
        scanf("%s", words[i]);
    }
    
    for (i = 0; i < 15; i++) {
        for (j = 0; j < 5; j++) {
            if (words[j][i] != NULL) {
                printf("%c", words[j][i]);
            }
        }
    }
}
