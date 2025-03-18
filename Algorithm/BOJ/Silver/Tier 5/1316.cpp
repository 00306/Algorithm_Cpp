//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 3/10/25.
//

#include <stdio.h>

int main(int argc, char * argv[]) {
    int n, count = 0;
    scanf("%d", &n);
    
    char str[101];
    
    for (int i = 0; i < n; i++) {
        scanf("%s", str);
        int alphabet[27] = { 0 };
        char before = ' ';
        int isGroupWord = 1;
        
        for (int j = 0; str[j] != '\0'; j++) {
            int index = str[j] - 97;
            
            if (alphabet[index] && before != index) {
                isGroupWord = 0;
                break;
            }
            
            alphabet[index] = 1;
            before = index;
        }
        
        if (isGroupWord) { count++; }
    }
    
    printf("%d", count);
}
