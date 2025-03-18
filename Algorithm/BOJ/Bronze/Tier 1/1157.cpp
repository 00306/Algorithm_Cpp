//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 11/11/24.
//

#include <stdio.h>
#include <cstring>
#include <ctype.h>

int main(int argc, char * argv[]) {
    char str[1000001];
    int count[26] = { 0 };
    char result = '?';
    int max = 0;
    
    scanf("%s", str);
    size_t length = strlen(str);
    
    for (size_t i = 0; i < length; i++) {
        str[i] = toupper(str[i]);
        count[str[i] -  'A'] += 1;
    }
    
    for (size_t i = 0; i < 26; i++) {
        if (count[i] > max) {
            max = count[i];
            result = 'A' + i;
        } else if (count[i] == max) {
            result = '?';
        }
    }
    
    printf("%c", result);
}
