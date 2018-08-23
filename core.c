//
//  core.c
//  Week2 
//
//  Created by Ashley Coleman on 7/5/18.
//  Copyright © 2018 Ashley Coleman. All rights reserved.
//

#include "core.h"

// This function should calculate the letter
// grade for the given percentage
// i.e. 
//     100-90: A
//      89-80: B
//      79-70: C
//      69-60: D
//      59-00: F
//         <0: 0
//
// using only if/else/else if conditionals
//
char calculate_grade(int percent) {
    if (percent > 89) {
        return 'A';
    } 

    if (percent > 79) {
        return 'B';
    }

    if (percent > 69) {
        return 'C';
    }

    if (percent > 59) {
        return 'D';
    }

    if (percent > -1) {
        return 'F';
    }

    return 0;
}


// This function should return the department name
// from the given department code. The map is listed below.
// If a unknown code is recieved "Unknown" should be returned.
// Switch should be the only control structure used here
//
// code | department name
//   01 | Computer Science
//   02 | Computer Science
//   05 | Computer Engineering
//   10 | Physics
//   20 | Chemistry
//  100 | Math
char * department_name(int department_code) {
    switch (department_code) {
        case 1:
        case 2:
            return "Computer Science";
        case 5:
            return "Computer Engineering";
        case 10: 
            return "Physics";
        case 20:
            return "Chemistry";
        case 100:
            return "Math";
        default:
            return "Unknown";
    }
}

// This function should calculate the factorial of n
// where factorial is defined as n * n - 1 * n - 2 * ... * 1
// i.e 4 factorial = 4 * 3 * 2 * 1 = 24
// There is one special case. 0 factorial is defined to be 1
// Negative factorials are not defined, and thus should return -1
int factorial(int n) {
    if (n < 0) {
        return -1;
    }

    if (n == 0) {
        return 1;
    }
    
    int out = n;

    for (int i = n - 1; i > 1; i--) {
        out *= i;
    }

    return out;
}

