//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 3/7/25.
//

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char str[101];
    scanf("%s", str);
    int i = 0, count = 0;
    
    while (str[i] != '\0') {
        if (strncmp(&str[i], "dz=", 3) == 0) {
            i += 3;
        } else if (
                   strncmp(&str[i], "c=", 2) == 0 ||
                   strncmp(&str[i], "c-", 2) == 0 ||
                   strncmp(&str[i], "d-", 2) == 0 ||
                   strncmp(&str[i], "lj", 2) == 0 ||
                   strncmp(&str[i], "nj", 2) == 0 ||
                   strncmp(&str[i], "s=", 2) == 0 ||
                   strncmp(&str[i], "z=", 2) == 0
                   ) {
                       i += 2;
                   }
        else { i += 1; }
        
        count++;
    }
    
    printf("%d", count);
    
}


