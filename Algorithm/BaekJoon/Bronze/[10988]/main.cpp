//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 11/11/24.
//

#include <stdio.h>
#include <cstring>

int main(int argc, char * argv[]) {
    char str[101];
    int result = 1;
    
    scanf("%s", str);
    size_t length = strlen(str);
    
    for (size_t i = 0; str[i] != '\0'; i++) {
        if (str[i] != str[length-1-i]) {
            result = 0;
            break;
        }
    }
    
    printf("%d", result);
}
