//
//  main.cpp
//  Algorithm
//
//  Created by 송지혁 on 3/12/25.
//

#include <stdio.h>
#include <string.h>

double changeGradeToScore(char* grade) {
    if (strcmp(grade, "A+") == 0) { return 4.5; }
    else if (strcmp(grade, "A0") == 0) { return 4.0; }
    else if (strcmp(grade, "B+") == 0) { return 3.5; }
    else if (strcmp(grade, "B0") == 0) { return 3.0; }
    else if (strcmp(grade, "C+") == 0) { return 2.5; }
    else if (strcmp(grade, "C0") == 0) { return 2.0; }
    else if (strcmp(grade, "D+") == 0) { return 1.5; }
    else if (strcmp(grade, "D0") == 0) { return 1.0; }
    else if (strcmp(grade, "F") == 0) { return 0.0; }
    
    return 0;
}


int main(int argc, char *argv[]) {
    int n = 20;
    double sum = 0;
    double creditSum = 0;
    
    for (int i = 0; i < n; i++) {
        char subject[51];
        double credit;
        char grade[3];
    
        scanf("%s", subject);
        scanf("%lf", &credit);
        scanf("%s", grade);
        
        if (strcmp(grade, "P") == 0) {
            continue;
        }
        
        creditSum += credit;
        double score = credit * changeGradeToScore(grade);
        sum += score;
    }
    
    printf("%lf\n", sum / creditSum);
}

